{
    "targets": [
    {
        "target_name": "addon",
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