cd ..\cpp-extern\ 
del /S /Q .\obj\* 
haxelib run hxcpp Build.xml -Ddebug -Dandroid
cd ..\build\
pause
