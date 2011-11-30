$estr = function() { return js.Boot.__string_rec(this,''); }
if(typeof js=='undefined') js = {}
js.Boot = function() { }
js.Boot.__name__ = ["js","Boot"];
js.Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
}
js.Boot.__trace = function(v,i) {
	var msg = i != null?i.fileName + ":" + i.lineNumber + ": ":"";
	msg += js.Boot.__unhtml(js.Boot.__string_rec(v,"")) + "<br/>";
	var d = document.getElementById("haxe:trace");
	if(d == null) alert("No haxe:trace element defined\n" + msg); else d.innerHTML += msg;
}
js.Boot.__clear_trace = function() {
	var d = document.getElementById("haxe:trace");
	if(d != null) d.innerHTML = "";
}
js.Boot.__closure = function(o,f) {
	var m = o[f];
	if(m == null) return null;
	var f1 = function() {
		return m.apply(o,arguments);
	};
	f1.scope = o;
	f1.method = m;
	return f1;
}
js.Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ != null || o.__ename__ != null)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__ != null) {
				if(o.length == 2) return o[0];
				var str = o[0] + "(";
				s += "\t";
				var _g1 = 2, _g = o.length;
				while(_g1 < _g) {
					var i = _g1++;
					if(i != 2) str += "," + js.Boot.__string_rec(o[i],s); else str += js.Boot.__string_rec(o[i],s);
				}
				return str + ")";
			}
			var l = o.length;
			var i;
			var str = "[";
			s += "\t";
			var _g = 0;
			while(_g < l) {
				var i1 = _g++;
				str += (i1 > 0?",":"") + js.Boot.__string_rec(o[i1],s);
			}
			str += "]";
			return str;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			return "???";
		}
		if(tostr != null && tostr != Object.toString) {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) { ;
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__") {
			continue;
		}
		if(str.length != 2) str += ", \n";
		str += s + k + " : " + js.Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += "\n" + s + "}";
		return str;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
}
js.Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0, _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js.Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js.Boot.__interfLoop(cc.__super__,cl);
}
js.Boot.__instanceof = function(o,cl) {
	try {
		if(o instanceof cl) {
			if(cl == Array) return o.__enum__ == null;
			return true;
		}
		if(js.Boot.__interfLoop(o.__class__,cl)) return true;
	} catch( e ) {
		if(cl == null) return false;
	}
	switch(cl) {
	case Int:
		return Math.ceil(o%2147483648.0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return o === true || o === false;
	case String:
		return typeof(o) == "string";
	case Dynamic:
		return true;
	default:
		if(o == null) return false;
		return o.__enum__ == cl || cl == Class && o.__name__ != null || cl == Enum && o.__ename__ != null;
	}
}
js.Boot.__init = function() {
	js.Lib.isIE = typeof document!='undefined' && document.all != null && typeof window!='undefined' && window.opera == null;
	js.Lib.isOpera = typeof window!='undefined' && window.opera != null;
	Array.prototype.copy = Array.prototype.slice;
	Array.prototype.insert = function(i,x) {
		this.splice(i,0,x);
	};
	Array.prototype.remove = Array.prototype.indexOf?function(obj) {
		var idx = this.indexOf(obj);
		if(idx == -1) return false;
		this.splice(idx,1);
		return true;
	}:function(obj) {
		var i = 0;
		var l = this.length;
		while(i < l) {
			if(this[i] == obj) {
				this.splice(i,1);
				return true;
			}
			i++;
		}
		return false;
	};
	Array.prototype.iterator = function() {
		return { cur : 0, arr : this, hasNext : function() {
			return this.cur < this.arr.length;
		}, next : function() {
			return this.arr[this.cur++];
		}};
	};
	if(String.prototype.cca == null) String.prototype.cca = String.prototype.charCodeAt;
	String.prototype.charCodeAt = function(i) {
		var x = this.cca(i);
		if(x != x) return null;
		return x;
	};
	var oldsub = String.prototype.substr;
	String.prototype.substr = function(pos,len) {
		if(pos != null && pos != 0 && len != null && len < 0) return "";
		if(len == null) len = this.length;
		if(pos < 0) {
			pos = this.length + pos;
			if(pos < 0) pos = 0;
		} else if(len < 0) len = this.length + len - pos;
		return oldsub.apply(this,[pos,len]);
	};
	$closure = js.Boot.__closure;
}
js.Boot.prototype.__class__ = js.Boot;
if(typeof hxgl=='undefined') hxgl = {}
if(!hxgl.cross) hxgl.cross = {}
hxgl.cross.Context = function() { }
hxgl.cross.Context.__name__ = ["hxgl","cross","Context"];
hxgl.cross.Context.init = function(cb) {
	hxgl.cross.Context.canvas = js.Lib.document.getElementById("hxgl-out");
	if(null == hxgl.cross.Context.canvas) {
		hxgl.cross.Context.canvas = js.Lib.document.createElement("canvas");
		hxgl.cross.Context.canvas.setAttribute("id","hxgl-out");
		js.Lib.document.body.appendChild(hxgl.cross.Context.canvas);
		hxgl.cross.Context.canvas = js.Lib.document.getElementById("hxgl-out");
		if(null == hxgl.cross.Context.canvas) throw "Unable to create context";
	}
	hxgl.cross.Context.gl = hxgl.cross.Context.canvas.getContext("experimental-webgl");
	hxgl.cross.Context.gl = WebGLDebugUtils.makeDebugContext(hxgl.cross.Context.gl);
	if(null == hxgl.cross.Context.gl) throw "Unable to create gl";
	cb();
}
hxgl.cross.Context.move = function(x,y) {
	hxgl.cross.Context.canvas.setAttribute("style","position: absolute; left: " + x + "px; top:" + y + "px;");
}
hxgl.cross.Context.clear = function(r,g,b,a,d,m) {
	if(m == null) m = 0;
	if(d == null) d = -1;
	if(a == null) a = 1.0;
	if(b == null) b = 0.0;
	if(g == null) g = 0.0;
	if(r == null) r = 0.0;
	hxgl.cross.Context.gl.clearColor(r,g,b,a);
	hxgl.cross.Context.gl.clear(hxgl.cross.Context.gl.COLOR_BUFFER_BIT);
}
hxgl.cross.Context.setCulling = function(triangleFaceToCull) {
	switch(triangleFaceToCull) {
	case "BACK":
		hxgl.cross.Context.gl.enable(hxgl.cross.Context.gl.CULL_FACE);
		hxgl.cross.Context.gl.cullFace(hxgl.cross.Context.gl.BACK);
		break;
	case "FRONT":
		hxgl.cross.Context.gl.enable(hxgl.cross.Context.gl.CULL_FACE);
		hxgl.cross.Context.gl.cullFace(hxgl.cross.Context.gl.FRONT);
		break;
	case "FRONT_AND_BACK":
		hxgl.cross.Context.gl.enable(hxgl.cross.Context.gl.CULL_FACE);
		hxgl.cross.Context.gl.cullFace(hxgl.cross.Context.gl.FRONT_AND_BACK);
		break;
	case "NONE":
		hxgl.cross.Context.gl.disable(hxgl.cross.Context.gl.CULL_FACE);
		hxgl.cross.Context.gl.cullFace(hxgl.cross.Context.gl.NONE);
		break;
	default:
		throw "Invalid cull mode";
	}
}
hxgl.cross.Context.setDepthTest = function(depthMask,passCompareMode) {
	hxgl.cross.Context.gl.depthMask(depthMask);
	switch(passCompareMode) {
	case "ALWAYS":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.ALWAYS);
		break;
	case "EQUAL":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.EQUAL);
		break;
	case "GREATER":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.GREATER);
		break;
	case "GREATER_EQUAL":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.GEQUAL);
		break;
	case "LESS":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.LESS);
		break;
	case "LESS_EQUAL":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.LEQUAL);
		break;
	case "NEVER":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.NEVER);
		break;
	case "NOT_EQUAL":
		hxgl.cross.Context.gl.depthFunc(hxgl.cross.Context.gl.NOTEQUAL);
		break;
	default:
		throw "Invalid passCompareMode";
	}
}
hxgl.cross.Context.configureBackBuffer = function(width,height,aa) {
	hxgl.cross.Context.canvas.setAttribute("width",width);
	hxgl.cross.Context.canvas.setAttribute("height",height);
	hxgl.cross.Context.gl.viewport(0,0,width,height);
}
hxgl.cross.Context.createVertexBuffer = function(numVertices,data32PerVertex) {
	var id = hxgl.cross.Context.gl.createBuffer();
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,id);
	hxgl.cross.Context.gl.bufferData(hxgl.cross.Context.gl.ARRAY_BUFFER,numVertices * data32PerVertex * 4,hxgl.cross.Context.gl.STATIC_DRAW);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,null);
	var vb = new hxgl.cross.data.VertexBuffer(id,data32PerVertex * 4);
	return vb;
}
hxgl.cross.Context.createIndexBuffer = function(numIndices) {
	var id = hxgl.cross.Context.gl.createBuffer();
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,id);
	hxgl.cross.Context.gl.bufferData(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,numIndices * 2,hxgl.cross.Context.gl.STATIC_DRAW);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,null);
	var ib = new hxgl.cross.data.IndexBuffer(id,numIndices);
	return ib;
}
hxgl.cross.Context.drawTriangles = function(indexBuffer,firstIndex,numTriangles) {
	if(numTriangles == null) numTriangles = -1;
	if(firstIndex == null) firstIndex = 0;
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,indexBuffer.id);
	if(numTriangles == -1) numTriangles = indexBuffer.numIndices; else numTriangles *= 3;
	hxgl.cross.Context.gl.drawElements(hxgl.cross.Context.gl.TRIANGLES,numTriangles,hxgl.cross.Context.gl.UNSIGNED_SHORT,firstIndex);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,null);
}
hxgl.cross.Context.setVertexBufferAt = function(index,buffer,bufferOffset,format) {
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,buffer.id);
	var loc = hxgl.cross.Context.gl.getAttribLocation(hxgl.cross.Context.__program,index);
	var type = 0;
	var size = 0;
	switch(format) {
	case "float3":
		type = hxgl.cross.Context.gl.FLOAT;
		size = 3;
		break;
	default:
		throw "Invalid format";
	}
	hxgl.cross.Context.gl.vertexAttribPointer(loc,size,type,false,buffer.__bsize,bufferOffset * 4);
	hxgl.cross.Context.gl.enableVertexAttribArray(loc);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,null);
}
hxgl.cross.Context.__GL__setMatrix = function(loc,transpose,mat) {
	var loc1 = hxgl.cross.Context.gl.getUniformLocation(hxgl.cross.Context.__program,loc);
	hxgl.cross.Context.gl.uniformMatrix4fv(loc1,transpose,mat);
}
hxgl.cross.Context.createProgram = function() {
	return new hxgl.cross.data.Program(hxgl.cross.Context.gl.createProgram());
}
hxgl.cross.Context.setProgram = function(program) {
	hxgl.cross.Context.__program = program.__prog;
	hxgl.cross.Context.gl.useProgram(hxgl.cross.Context.__program);
}
hxgl.cross.Context.present = function() {
}
hxgl.cross.Context.canvas = null;
hxgl.cross.Context.gl = null;
hxgl.cross.Context.__program = null;
hxgl.cross.Context.prototype.__class__ = hxgl.cross.Context;
js.Lib = function() { }
js.Lib.__name__ = ["js","Lib"];
js.Lib.isIE = null;
js.Lib.isOpera = null;
js.Lib.document = null;
js.Lib.window = null;
js.Lib.alert = function(v) {
	alert(js.Boot.__string_rec(v,""));
}
js.Lib.eval = function(code) {
	return eval(code);
}
js.Lib.setErrorHandler = function(f) {
	js.Lib.onerror = f;
}
js.Lib.prototype.__class__ = js.Lib;
if(!hxgl.cross.data) hxgl.cross.data = {}
hxgl.cross.data.IndexBuffer = function(id,numIndices) {
	if( id === $_ ) return;
	this.id = id;
	this.numIndices = numIndices;
}
hxgl.cross.data.IndexBuffer.__name__ = ["hxgl","cross","data","IndexBuffer"];
hxgl.cross.data.IndexBuffer.prototype.upload = function(indices,offset,numInds) {
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,this.id);
	hxgl.cross.Context.gl.bufferSubData(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,0,new Uint16Array(indices));
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,null);
}
hxgl.cross.data.IndexBuffer.prototype.id = null;
hxgl.cross.data.IndexBuffer.prototype.numIndices = null;
hxgl.cross.data.IndexBuffer.prototype.__class__ = hxgl.cross.data.IndexBuffer;
if(typeof haxe=='undefined') haxe = {}
haxe.Log = function() { }
haxe.Log.__name__ = ["haxe","Log"];
haxe.Log.trace = function(v,infos) {
	js.Boot.__trace(v,infos);
}
haxe.Log.clear = function() {
	js.Boot.__clear_trace();
}
haxe.Log.prototype.__class__ = haxe.Log;
Main = function() { }
Main.__name__ = ["Main"];
Main.main = function() {
	mth.Test.main();
}
Main.prototype.__class__ = Main;
Std = function() { }
Std.__name__ = ["Std"];
Std["is"] = function(v,t) {
	return js.Boot.__instanceof(v,t);
}
Std.string = function(s) {
	return js.Boot.__string_rec(s,"");
}
Std["int"] = function(x) {
	if(x < 0) return Math.ceil(x);
	return Math.floor(x);
}
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && x.charCodeAt(1) == 120) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
}
Std.parseFloat = function(x) {
	return parseFloat(x);
}
Std.random = function(x) {
	return Math.floor(Math.random() * x);
}
Std.prototype.__class__ = Std;
hxgl.cross.data.Program = function(prog) {
	if( prog === $_ ) return;
	this.__prog = prog;
}
hxgl.cross.data.Program.__name__ = ["hxgl","cross","data","Program"];
hxgl.cross.data.Program.prototype.upload = function(vertexProgram,fragmentProgram) {
	var gl = hxgl.cross.Context.gl;
	var __vertex = gl.createShader(gl.VERTEX_SHADER);
	gl.shaderSource(__vertex,vertexProgram);
	gl.compileShader(__vertex);
	if(!gl.getShaderParameter(__vertex,gl.COMPILE_STATUS)) throw "Could not compile vertex shader:\n\n" + gl.getShaderInfoLog(__vertex);
	gl.attachShader(this.__prog,__vertex);
	var __fragment = gl.createShader(gl.FRAGMENT_SHADER);
	gl.shaderSource(__fragment,fragmentProgram);
	gl.compileShader(__fragment);
	if(!gl.getShaderParameter(__fragment,gl.COMPILE_STATUS)) throw "Could not compile fragment shader:\n\n" + gl.getShaderInfoLog(__fragment);
	gl.attachShader(this.__prog,__fragment);
	gl.linkProgram(this.__prog);
	if(!gl.getProgramParameter(this.__prog,gl.LINK_STATUS)) throw "Could not link the program!\n\n" + gl.getProgramInfoLog(this.__prog);
}
hxgl.cross.data.Program.prototype.__prog = null;
hxgl.cross.data.Program.prototype.__vertex = null;
hxgl.cross.data.Program.prototype.__fragment = null;
hxgl.cross.data.Program.prototype.__class__ = hxgl.cross.data.Program;
haxe.Timer = function(time_ms) {
	if( time_ms === $_ ) return;
	var arr = haxe_timers;
	this.id = arr.length;
	arr[this.id] = this;
	this.timerId = window.setInterval("haxe_timers[" + this.id + "].run();",time_ms);
}
haxe.Timer.__name__ = ["haxe","Timer"];
haxe.Timer.delay = function(f,time_ms) {
	var t = new haxe.Timer(time_ms);
	t.run = function() {
		t.stop();
		f();
	};
	return t;
}
haxe.Timer.measure = function(f,pos) {
	var t0 = haxe.Timer.stamp();
	var r = f();
	haxe.Log.trace(haxe.Timer.stamp() - t0 + "s",pos);
	return r;
}
haxe.Timer.stamp = function() {
	return Date.now().getTime() / 1000;
}
haxe.Timer.prototype.id = null;
haxe.Timer.prototype.timerId = null;
haxe.Timer.prototype.stop = function() {
	if(this.id == null) return;
	window.clearInterval(this.timerId);
	var arr = haxe_timers;
	arr[this.id] = null;
	if(this.id > 100 && this.id == arr.length - 1) {
		var p = this.id - 1;
		while(p >= 0 && arr[p] == null) p--;
		arr = arr.slice(0,p + 1);
	}
	this.id = null;
}
haxe.Timer.prototype.run = function() {
}
haxe.Timer.prototype.__class__ = haxe.Timer;
if(typeof format=='undefined') format = {}
if(!format.glsl) format.glsl = {}
format.glsl.Shader = function(c) {
}
format.glsl.Shader.__name__ = ["format","glsl","Shader"];
format.glsl.Shader.prototype.getVertexData = function() {
	throw "needs subclass";
	return null;
}
format.glsl.Shader.prototype.getFragmentData = function() {
	throw "needs subclass";
	return null;
}
format.glsl.Shader.prototype.send = function(vertex) {
}
format.glsl.Shader.prototype.bindInit = function(buf) {
}
format.glsl.Shader.prototype.bindDone = function() {
}
format.glsl.Shader.prototype.bindReg = function(nfloats) {
}
format.glsl.Shader.prototype.bind = function(buf) {
}
format.glsl.Shader.prototype.unbind = function() {
}
format.glsl.Shader.prototype.draw = function(vbuf,ibuf) {
}
format.glsl.Shader.prototype.dispose = function() {
}
format.glsl.Shader.prototype.start = function(vertex) {
}
format.glsl.Shader.prototype.add = function(v) {
}
format.glsl.Shader.prototype.texture = function(index,t) {
}
format.glsl.Shader.prototype.unbindTex = function(index) {
}
format.glsl.Shader.prototype.done = function() {
	this.send(false);
}
format.glsl.Shader.prototype.__class__ = format.glsl.Shader;
hxgl.cross.data.VertexBuffer = function(id,bsize) {
	if( id === $_ ) return;
	this.id = id;
	this.__bsize = bsize;
}
hxgl.cross.data.VertexBuffer.__name__ = ["hxgl","cross","data","VertexBuffer"];
hxgl.cross.data.VertexBuffer.prototype.upload = function(vertices,offset,numVerts) {
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,this.id);
	hxgl.cross.Context.gl.bufferSubData(hxgl.cross.Context.gl.ARRAY_BUFFER,0,new Float32Array(vertices));
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,null);
}
hxgl.cross.data.VertexBuffer.prototype.id = null;
hxgl.cross.data.VertexBuffer.prototype.__bsize = null;
hxgl.cross.data.VertexBuffer.prototype.__class__ = hxgl.cross.data.VertexBuffer;
if(typeof mth=='undefined') mth = {}
mth.Test = function(p) {
	if( p === $_ ) return;
	hxgl.cross.Context.init($closure(this,"onReady"));
	this.ct = 0;
}
mth.Test.__name__ = ["mth","Test"];
mth.Test.main = function() {
	var inst = new mth.Test();
}
mth.Test.createCube = function(x,y,z) {
	var vb = hxgl.cross.Context.createVertexBuffer(8,3);
	vb.upload([0,0,0,x,0,0,0,y,0,0,0,z,x,y,0,x,0,z,0,y,z,x,y,z],0,8);
	var ib = hxgl.cross.Context.createIndexBuffer(36);
	ib.upload([0,1,5,0,5,3,1,4,7,1,7,5,3,5,7,3,7,6,0,6,2,0,3,6,2,7,4,2,6,7,0,4,1,0,2,4],0,36);
	return { vb : vb, ib : ib};
}
mth.Test.prototype.shader = null;
mth.Test.prototype.onReady = function() {
	this.shader = new mth.Shader(null);
	hxgl.cross.Context.configureBackBuffer(400,400,4);
	hxgl.cross.Context.move(100,100);
	var t = new haxe.Timer(33);
	t.run = $closure(this,"update");
}
mth.Test.prototype.ct = null;
mth.Test.prototype.update = function() {
	this.ct += .05;
	hxgl.cross.Context.clear(0,0,0,1);
	var out = mth.Test.createCube(1,1,1);
	var vb = out.vb.vb;
	var ib = out.ib;
	var vb1 = hxgl.cross.Context.createVertexBuffer(3,6);
	var ib1 = hxgl.cross.Context.createIndexBuffer(3);
	vb1.upload([0.0,0.0,.5,1.0,0.0,0.0,1.0,0.0,.5,0.0,1.0,0.0,0.0,1.0,.5,0.0,0.0,1.0],0,3);
	ib1.upload([0,1,2],0,3);
	var dst = Math.sin(this.ct);
	var fov = 90;
	var ratio = 4 / 3;
	var zFar = 1000;
	var zNear = 1;
	var scale = Math.tan(fov * Math.PI / 360);
	var m11 = scale;
	var m22 = -scale * ratio;
	var m33 = zFar / (zNear - zFar);
	var m34 = -1;
	var m43 = zNear * zFar / (zNear - zFar);
	var prog = hxgl.cross.Context.createProgram();
	prog.upload(this.shader.getVertexData(),this.shader.getFragmentData());
	hxgl.cross.Context.setProgram(prog);
	hxgl.cross.Context.setVertexBufferAt("pos",vb1,0,"float3");
	hxgl.cross.Context.drawTriangles(ib1);
	hxgl.cross.Context.present();
}
mth.Test.prototype.__class__ = mth.Test;
mth.Shader = function(c) {
	if( c === $_ ) return;
	format.glsl.Shader.call(this,c);
}
mth.Shader.__name__ = ["mth","Shader"];
mth.Shader.__super__ = format.glsl.Shader;
for(var k in format.glsl.Shader.prototype ) mth.Shader.prototype[k] = format.glsl.Shader.prototype[k];
mth.Shader.prototype.getVertexData = function() {
	return "\tattribute vec3 pos;\n\tvarying vec3 color;\nvoid main()\n\t{\n\t\tgl_Position = vec4(pos, 1.0).xyzw;\n\t\tcolor = pos;\n\t\t\n\t}\n\t";
}
mth.Shader.prototype.getFragmentData = function() {
	return "#ifdef GL_ES\n\tprecision highp float;\n\t#endif\n\t\tvarying vec3 color;\nvoid main()\n\t{\n\t\tgl_FragColor = vec4(color, 1.0).xyzw;\n\t\t\n\t}\n\t";
}
mth.Shader.prototype.bind = function(buf) {
	this.bindInit(buf);
	null;
	this.bindDone();
}
mth.Shader.prototype.init = function(vertex,fragment) {
	this.start(true);
	this.start(false);
	this.done();
}
mth.Shader.prototype.__class__ = mth.Shader;
IntIter = function(min,max) {
	if( min === $_ ) return;
	this.min = min;
	this.max = max;
}
IntIter.__name__ = ["IntIter"];
IntIter.prototype.min = null;
IntIter.prototype.max = null;
IntIter.prototype.hasNext = function() {
	return this.min < this.max;
}
IntIter.prototype.next = function() {
	return this.min++;
}
IntIter.prototype.__class__ = IntIter;
$_ = {}
js.Boot.__res = {}
js.Boot.__init();
{
	var d = Date;
	d.now = function() {
		return new Date();
	};
	d.fromTime = function(t) {
		var d1 = new Date();
		d1["setTime"](t);
		return d1;
	};
	d.fromString = function(s) {
		switch(s.length) {
		case 8:
			var k = s.split(":");
			var d1 = new Date();
			d1["setTime"](0);
			d1["setUTCHours"](k[0]);
			d1["setUTCMinutes"](k[1]);
			d1["setUTCSeconds"](k[2]);
			return d1;
		case 10:
			var k = s.split("-");
			return new Date(k[0],k[1] - 1,k[2],0,0,0);
		case 19:
			var k = s.split(" ");
			var y = k[0].split("-");
			var t = k[1].split(":");
			return new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
		default:
			throw "Invalid date format : " + s;
		}
	};
	d.prototype["toString"] = function() {
		var date = this;
		var m = date.getMonth() + 1;
		var d1 = date.getDate();
		var h = date.getHours();
		var mi = date.getMinutes();
		var s = date.getSeconds();
		return date.getFullYear() + "-" + (m < 10?"0" + m:"" + m) + "-" + (d1 < 10?"0" + d1:"" + d1) + " " + (h < 10?"0" + h:"" + h) + ":" + (mi < 10?"0" + mi:"" + mi) + ":" + (s < 10?"0" + s:"" + s);
	};
	d.prototype.__class__ = d;
	d.__name__ = ["Date"];
}
{
	js.Lib.document = document;
	js.Lib.window = window;
	onerror = function(msg,url,line) {
		var f = js.Lib.onerror;
		if( f == null )
			return false;
		return f(msg,[url+":"+line]);
	}
}
{
	String.prototype.__class__ = String;
	String.__name__ = ["String"];
	Array.prototype.__class__ = Array;
	Array.__name__ = ["Array"];
	Int = { __name__ : ["Int"]};
	Dynamic = { __name__ : ["Dynamic"]};
	Float = Number;
	Float.__name__ = ["Float"];
	Bool = { __ename__ : ["Bool"]};
	Class = { __name__ : ["Class"]};
	Enum = { };
	Void = { __ename__ : ["Void"]};
}
{
	Math.__name__ = ["Math"];
	Math.NaN = Number["NaN"];
	Math.NEGATIVE_INFINITY = Number["NEGATIVE_INFINITY"];
	Math.POSITIVE_INFINITY = Number["POSITIVE_INFINITY"];
	Math.isFinite = function(i) {
		return isFinite(i);
	};
	Math.isNaN = function(i) {
		return isNaN(i);
	};
}
if(typeof(haxe_timers) == "undefined") haxe_timers = [];
js.Lib.onerror = null;
Main.main()