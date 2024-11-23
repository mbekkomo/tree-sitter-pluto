generate:
    tree-sitter generate --js-runtime bun

build release="":
    clang -shared -no-pie {{ if release != '' { "-Os" } else { "" } }} -fno-omit-frame-pointer -fsanitize=address -g3 -ggdb -Isrc -o pluto.so src/*.c
