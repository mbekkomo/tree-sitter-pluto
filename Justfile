generate:
    #!/usr/bin/env bash
    nelua -t --cc true -g c -c -P noentrypoint -P nogcentry -o src/scanner.c src/scanner.nelua &
    bunx civet --js -c grammar.civet -o grammar.js &
    wait
    tree-sitter generate --js-runtime bun

build release="":
    gcc -shared -fPIC {{ if release != '' { "-Os" } else { "" } }} -Isrc -o pluto.so src/*.c
