add_rules("mode.debug", "mode.release")

target("tab-engine")
    set_kind("binary")
    add_files("src/*.cpp")