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
      hash = "sha256-/AsLdT+pyW1D7rHv+se7ehNIfmb33Uqb6gwhDAyfHQM=";
    };
    src = passthru.sources."x86_64-linux";
  };
in
{
  packages = with pkgs; [
    bun
    tree-sitter
    just
    clang
    
    ccls
    typescript-language-server
    nodePackages.prettier
  ];
}
