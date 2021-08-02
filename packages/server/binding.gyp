{
    "targets": [
    {
        "target_name": "addon",
        "include_dirs": [
            "/usr/include/gstreamer-1.0",
            "/usr/include/glib-2.0",
            "/usr/lib/x86_64-linux-gnu/glib-2.0/include"
        ],
        "libraries": [
            "-lgstreamer-1.0",
            "-lgobject-2.0",
            "-lglib-2.0"
        ],
        "sources": [
            "./src/main.cc"
        ],
    }
  ]
}