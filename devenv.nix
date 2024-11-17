{
  pkgs,
  lib,
  config,
  inputs,
  ...
}:
let
  # https://github.com/NixOS/nixpkgs/pull/313760#issuecomment-2365160954
  bun = pkgs.bun.overrideAttrs rec {
    passthru.sources."x86_64-linux" = pkgs.fetchurl {
      url = "https://github.com/oven-sh/bun/releases/download/bun-v${pkgs.bun.version}/bun-linux-x64-baseline.zip";
      hash = "sha256-J91TeAZh6aa6hHBdn3c+r47gC3OvdEYSLvfnrADDiuE=";
    };
    src = passthru.sources."x86_64-linux";
  };
in
{
  packages = with pkgs; [
    bun
    tree-sitter
  ];

  tasks."tree-sitter-pluto:generate".exec = ''
    export PATH=$PATH:${bun}/bin:${pkgs.tree-sitter}/bin:${pkgs.nodePackages.nodejs}/bin
    bunx --bun civet -c --js grammar.civet -o grammar.js
    tree-sitter generate
  '';

  tasks."tree-sitter-pluto:build".exec = ''
    export PATH=$PATH:${pkgs.gcc}/bin:${pkgs.fd}/bin
    fd -e c . src -X gcc -shared -fPIC {} -o pluto.so
  '';
}
