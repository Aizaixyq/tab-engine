project=("tab-engine")
sources=("main/*.cpp" "editor/*.cpp" "platform/*.cpp" "core/*.cpp")
includedir=("main" "editor" "platform" "core")
deps=("libsdl" "spdlog")
compiler="clang++"
mode="debug"
cflags=("-Wall" "-g")
pch_header="main/libh.hpp"