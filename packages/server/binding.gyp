{
    "targets": [
    {
        "target_name": "addon",
        "cflags": [
            "-std=c++11",
            "-stdlib=libc++"
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
            "../../3rdparty/opencv/@3.4/include",
            "<!(node -e \"require('nan')\")"
        ],
        'libraries': [
            "<!@(node utils/find-libs.js)",
        ],
        "sources": [
            "./src/main.cc",
            "./src/lib/ModalWindow.cc"
        ],
    }
  ]
}
