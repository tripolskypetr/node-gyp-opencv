{
    "targets": [
    {
        "target_name": "addon",
        "cflags": [
            "-std=c++11"
        ],
        "cflags_cc!": [
            "-fno-rtti",
            "-fno-exceptions"
        ],
        "xcode_settings": {
            "GCC_ENABLE_CPP_RTTI": "YES",
            "GCC_ENABLE_CPP_EXCEPTIONS": "YES",
        },
        "include_dirs": [
            "<!@(pkg-config opencv --cflags)",
            "<!(node -e \"require('nan')\")"
        ],
        'libraries': [
            "<!@(pkg-config opencv --libs)"
        ],
        "sources": [
            "./src/main.cc",
            "./src/lib/MainAddon.cc"
        ],
    }
  ]
}
