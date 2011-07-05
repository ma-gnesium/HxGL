#!/bin/sh
cd ../cpp-extern/
rm -r ./obj/*
haxelib run hxcpp Build.xml -debug
cd ../build/
