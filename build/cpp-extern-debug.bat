cd ..\cpp-extern\ 
del /S /Q .\obj\* 
haxelib run hxcpp Build.xml -debug 
cd ..\build\
pause