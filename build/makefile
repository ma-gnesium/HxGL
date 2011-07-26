#debug=1

TESTS=WindowOnly ClearOnly SCubeShaderTest

ifdef debug
DBG=-debug
DBGDEF=-Ddebug
endif

MAKE1=$(MAKE) -w -f ../build/makefile -C ..
MAKE2=$(MAKE) -w -f ../../build/makefile -C ..

all: ndll alltests.js alltests.cpp

.PHONY: ndll hxcpp clean alltests.run alltests.js alltests.cpp all

clean :
	-rm -rf ../cpp-extern/obj ../cpp-extern/all_objs
	-rm -rf $(TESTS:%=../tests/%/bin)

ndll ../ndll/*/*: 
	$(MAKE1)/cpp-extern hxcpp

alltests.run : $(TESTS:%=%.test.run)
alltests.js : $(TESTS:%=%.test.js)
alltests.cpp : $(TESTS:%=%.test.cpp)
alltests.android : $(TESTS:%=%.test.android)

%.test.run : ndll
	$(MAKE2)/tests/$* $*.run
%.test.cpp :
	$(MAKE2)/tests/$* bin/$*$(DBG)
%.test.android :
	$(MAKE2)/tests/$* bin/lib$*$(DBG).so
%.test.js :
	$(MAKE2)/tests/$* bin/$*.js

#
# This is intended to be run in ../cpp-extern
#
hxcpp : Build.xml *.h *.cpp */*.h */*.cpp
	haxelib run hxcpp $(DBGDEF) Build.xml

#
# This is intended to be run in ../tests/*
#
HAXE=haxe -cp ../tools -cp ../.. $(DBG)

%.run : bin/%$(DBG)
	bin/$*$(DBG)
bin/%$(DBG) : %.hx
	$(HAXE) -cpp bin -main $*
bin/lib%$(DBG).so : %.hx
	$(HAXE) -Dandroid -cpp bin -main $*
bin/%$(DBG).js : %.hx bin/%$(DBG).html
	$(HAXE) -js bin/$*$(DBG).js -main $*
bin/%.html: $(MAKEFILE_LIST)
	mkdir -p bin
	echo '<html>' > $@
	echo '<head><title>$*</title></head>' >> $@
	echo '<body>' >> $@
	echo '<canvas id="webGLCanvas"></canvas>' >> $@
	echo '<div id="haxe:trace"></div>' >> $@
	echo '<script src="../../../js_extern/HxGL.js"></script>' >> $@
	echo '<script src="$*.js"></script>' >> $@
	echo '</body>' >> $@
	echo '</html>' >> $@

.SECONDARY:
