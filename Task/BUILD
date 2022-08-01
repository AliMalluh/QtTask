load("//tools/build_rules:qt.bzl", "qt_cc_library")

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    copts = [
        '-fpic',
    ],
    deps = [
        ":usercontroller",
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",

    ],
)

cc_library(
    name = "user",
    srcs = ["User.h"],
   
)
cc_library(
    name = "usercontroller",
    srcs = ["usercontroller.h"],
    deps = ["mainwindow",
             "login",
             "user",
            ],
   
)

qt_cc_library(
    name = "mainwindow",
    src = "mainwindow.cpp",
    hdr = "mainwindow.h",
    copts = [
        '-fpic',
    ],
    deps = [
        "user",
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
    ],
    ui = "mainwindow.ui",
    ui_deps = [
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "login",
    src = "login.cpp",
    hdr = "login.h",
    copts = [
        '-fpic',
    ],
    deps = [
        "user",
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
    ],
    ui = "login.ui",
    ui_deps = [
        "@qt//:qt_widgets",
    ],
)
