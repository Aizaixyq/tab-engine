add_rules("mode.debug", "mode.release")
add_requires("libsdl", "fmt", "libsdl_image", "libsdl_mixer")

target("tab-engine")
    set_kind("shared")
    add_files("main/*.cpp", "core/*.cpp")
    add_includedirs("core", "main")
    add_packages("libsdl", "libsdl_image", "libsdl_mixer")

target("test")
    set_kind("binary")
    add_files("main/*.cpp", "core/*.cpp", "test/*.cpp")
    add_includedirs("core", "main", "test")
    add_packages("libsdl", "libsdl_image", "libsdl_mixer")