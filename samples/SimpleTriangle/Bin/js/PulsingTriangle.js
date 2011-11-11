$estr = function() { return js.Boot.__string_rec(this,''); }
if(typeof js=='undefined') js = {}
js.Boot = function() { }
js.Boot.__name__ = ["js","Boot"];
js.Boot.__unhtml = function(s) {
	$s.push("js.Boot::__unhtml");
	var $spos = $s.length;
	var $tmp = s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
	$s.pop();
	return $tmp;
	$s.pop();
}
js.Boot.__trace = function(v,i) {
	$s.push("js.Boot::__trace");
	var $spos = $s.length;
	var msg = i != null?i.fileName + ":" + i.lineNumber + ": ":"";
	msg += js.Boot.__unhtml(js.Boot.__string_rec(v,"")) + "<br/>";
	var d = document.getElementById("haxe:trace");
	if(d == null) alert("No haxe:trace element defined\n" + msg); else d.innerHTML += msg;
	$s.pop();
}
js.Boot.__clear_trace = function() {
	$s.push("js.Boot::__clear_trace");
	var $spos = $s.length;
	var d = document.getElementById("haxe:trace");
	if(d != null) d.innerHTML = "";
	$s.pop();
}
js.Boot.__closure = function(o,f) {
	$s.push("js.Boot::__closure");
	var $spos = $s.length;
	var m = o[f];
	if(m == null) {
		$s.pop();
		return null;
	}
	var f1 = function() {
		$s.push("js.Boot::__closure@67");
		var $spos = $s.length;
		var $tmp = m.apply(o,arguments);
		$s.pop();
		return $tmp;
		$s.pop();
	};
	f1.scope = o;
	f1.method = m;
	$s.pop();
	return f1;
	$s.pop();
}
js.Boot.__string_rec = function(o,s) {
	$s.push("js.Boot::__string_rec");
	var $spos = $s.length;
	if(o == null) {
		$s.pop();
		return "null";
	}
	if(s.length >= 5) {
		$s.pop();
		return "<...>";
	}
	var t = typeof(o);
	if(t == "function" && (o.__name__ != null || o.__ename__ != null)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__ != null) {
				if(o.length == 2) {
					var $tmp = o[0];
					$s.pop();
					return $tmp;
				}
				var str = o[0] + "(";
				s += "\t";
				var _g1 = 2, _g = o.length;
				while(_g1 < _g) {
					var i = _g1++;
					if(i != 2) str += "," + js.Boot.__string_rec(o[i],s); else str += js.Boot.__string_rec(o[i],s);
				}
				var $tmp = str + ")";
				$s.pop();
				return $tmp;
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
			$s.pop();
			return str;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			$e = [];
			while($s.length >= $spos) $e.unshift($s.pop());
			$s.push($e[0]);
			$s.pop();
			return "???";
		}
		if(tostr != null && tostr != Object.toString) {
			var s2 = o.toString();
			if(s2 != "[object Object]") {
				$s.pop();
				return s2;
			}
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
		$s.pop();
		return str;
	case "function":
		$s.pop();
		return "<function>";
	case "string":
		$s.pop();
		return o;
	default:
		var $tmp = String(o);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
js.Boot.__interfLoop = function(cc,cl) {
	$s.push("js.Boot::__interfLoop");
	var $spos = $s.length;
	if(cc == null) {
		$s.pop();
		return false;
	}
	if(cc == cl) {
		$s.pop();
		return true;
	}
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0, _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js.Boot.__interfLoop(i1,cl)) {
				$s.pop();
				return true;
			}
		}
	}
	var $tmp = js.Boot.__interfLoop(cc.__super__,cl);
	$s.pop();
	return $tmp;
	$s.pop();
}
js.Boot.__instanceof = function(o,cl) {
	$s.push("js.Boot::__instanceof");
	var $spos = $s.length;
	try {
		if(o instanceof cl) {
			if(cl == Array) {
				var $tmp = o.__enum__ == null;
				$s.pop();
				return $tmp;
			}
			$s.pop();
			return true;
		}
		if(js.Boot.__interfLoop(o.__class__,cl)) {
			$s.pop();
			return true;
		}
	} catch( e ) {
		$e = [];
		while($s.length >= $spos) $e.unshift($s.pop());
		$s.push($e[0]);
		if(cl == null) {
			$s.pop();
			return false;
		}
	}
	switch(cl) {
	case Int:
		var $tmp = Math.ceil(o%2147483648.0) === o;
		$s.pop();
		return $tmp;
	case Float:
		var $tmp = typeof(o) == "number";
		$s.pop();
		return $tmp;
	case Bool:
		var $tmp = o === true || o === false;
		$s.pop();
		return $tmp;
	case String:
		var $tmp = typeof(o) == "string";
		$s.pop();
		return $tmp;
	case Dynamic:
		$s.pop();
		return true;
	default:
		if(o == null) {
			$s.pop();
			return false;
		}
		var $tmp = o.__enum__ == cl || cl == Class && o.__name__ != null || cl == Enum && o.__ename__ != null;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
js.Boot.__init = function() {
	$s.push("js.Boot::__init");
	var $spos = $s.length;
	js.Lib.isIE = typeof document!='undefined' && document.all != null && typeof window!='undefined' && window.opera == null;
	js.Lib.isOpera = typeof window!='undefined' && window.opera != null;
	Array.prototype.copy = Array.prototype.slice;
	Array.prototype.insert = function(i,x) {
		$s.push("js.Boot::__init@205");
		var $spos = $s.length;
		this.splice(i,0,x);
		$s.pop();
	};
	Array.prototype.remove = Array.prototype.indexOf?function(obj) {
		$s.push("js.Boot::__init@208");
		var $spos = $s.length;
		var idx = this.indexOf(obj);
		if(idx == -1) {
			$s.pop();
			return false;
		}
		this.splice(idx,1);
		$s.pop();
		return true;
		$s.pop();
	}:function(obj) {
		$s.push("js.Boot::__init@213");
		var $spos = $s.length;
		var i = 0;
		var l = this.length;
		while(i < l) {
			if(this[i] == obj) {
				this.splice(i,1);
				$s.pop();
				return true;
			}
			i++;
		}
		$s.pop();
		return false;
		$s.pop();
	};
	Array.prototype.iterator = function() {
		$s.push("js.Boot::__init@225");
		var $spos = $s.length;
		var $tmp = { cur : 0, arr : this, hasNext : function() {
			$s.push("js.Boot::__init@225@229");
			var $spos = $s.length;
			var $tmp = this.cur < this.arr.length;
			$s.pop();
			return $tmp;
			$s.pop();
		}, next : function() {
			$s.push("js.Boot::__init@225@232");
			var $spos = $s.length;
			var $tmp = this.arr[this.cur++];
			$s.pop();
			return $tmp;
			$s.pop();
		}};
		$s.pop();
		return $tmp;
		$s.pop();
	};
	if(String.prototype.cca == null) String.prototype.cca = String.prototype.charCodeAt;
	String.prototype.charCodeAt = function(i) {
		$s.push("js.Boot::__init@239");
		var $spos = $s.length;
		var x = this.cca(i);
		if(x != x) {
			$s.pop();
			return null;
		}
		$s.pop();
		return x;
		$s.pop();
	};
	var oldsub = String.prototype.substr;
	String.prototype.substr = function(pos,len) {
		$s.push("js.Boot::__init@246");
		var $spos = $s.length;
		if(pos != null && pos != 0 && len != null && len < 0) {
			$s.pop();
			return "";
		}
		if(len == null) len = this.length;
		if(pos < 0) {
			pos = this.length + pos;
			if(pos < 0) pos = 0;
		} else if(len < 0) len = this.length + len - pos;
		var $tmp = oldsub.apply(this,[pos,len]);
		$s.pop();
		return $tmp;
		$s.pop();
	};
	$closure = js.Boot.__closure;
	$s.pop();
}
js.Boot.prototype.__class__ = js.Boot;
if(typeof hxgl=='undefined') hxgl = {}
if(!hxgl.cross) hxgl.cross = {}
hxgl.cross.Context = function() { }
hxgl.cross.Context.__name__ = ["hxgl","cross","Context"];
hxgl.cross.Context.init = function(cb) {
	$s.push("hxgl.cross.Context::init");
	var $spos = $s.length;
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
	$s.pop();
}
hxgl.cross.Context.move = function(x,y) {
	$s.push("hxgl.cross.Context::move");
	var $spos = $s.length;
	hxgl.cross.Context.canvas.setAttribute("style","position: absolute; left: " + x + "px; top:" + y + "px;");
	$s.pop();
}
hxgl.cross.Context.clear = function(r,g,b,a,d,m) {
	$s.push("hxgl.cross.Context::clear");
	var $spos = $s.length;
	if(m == null) m = 0;
	if(d == null) d = -1;
	if(a == null) a = 1.0;
	if(b == null) b = 0.0;
	if(g == null) g = 0.0;
	if(r == null) r = 0.0;
	hxgl.cross.Context.gl.clearColor(r,g,b,a);
	hxgl.cross.Context.gl.clear(hxgl.cross.Context.gl.COLOR_BUFFER_BIT);
	$s.pop();
}
hxgl.cross.Context.setCulling = function(triangleFaceToCull) {
	$s.push("hxgl.cross.Context::setCulling");
	var $spos = $s.length;
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
	$s.pop();
}
hxgl.cross.Context.setDepthTest = function(depthMask,passCompareMode) {
	$s.push("hxgl.cross.Context::setDepthTest");
	var $spos = $s.length;
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
	$s.pop();
}
hxgl.cross.Context.configureBackBuffer = function(width,height,aa) {
	$s.push("hxgl.cross.Context::configureBackBuffer");
	var $spos = $s.length;
	hxgl.cross.Context.canvas.setAttribute("width",width);
	hxgl.cross.Context.canvas.setAttribute("height",height);
	hxgl.cross.Context.gl.viewport(0,0,width,height);
	$s.pop();
}
hxgl.cross.Context.createVertexBuffer = function(numVertices,data32PerVertex) {
	$s.push("hxgl.cross.Context::createVertexBuffer");
	var $spos = $s.length;
	var id = hxgl.cross.Context.gl.createBuffer();
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,id);
	hxgl.cross.Context.gl.bufferData(hxgl.cross.Context.gl.ARRAY_BUFFER,numVertices * data32PerVertex * 4,hxgl.cross.Context.gl.STATIC_DRAW);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,null);
	var $tmp = new hxgl.cross.data.VertexBuffer(id,data32PerVertex * 4);
	$s.pop();
	return $tmp;
	$s.pop();
}
hxgl.cross.Context.createIndexBuffer = function(numIndices) {
	$s.push("hxgl.cross.Context::createIndexBuffer");
	var $spos = $s.length;
	var id = hxgl.cross.Context.gl.createBuffer();
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,id);
	hxgl.cross.Context.gl.bufferData(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,numIndices * 2,hxgl.cross.Context.gl.STATIC_DRAW);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,null);
	var $tmp = new hxgl.cross.data.IndexBuffer(id,numIndices);
	$s.pop();
	return $tmp;
	$s.pop();
}
hxgl.cross.Context.drawTriangles = function(indexBuffer,firstIndex,numTriangles) {
	$s.push("hxgl.cross.Context::drawTriangles");
	var $spos = $s.length;
	if(numTriangles == null) numTriangles = -1;
	if(firstIndex == null) firstIndex = 0;
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,indexBuffer.id);
	if(numTriangles == -1) numTriangles = indexBuffer.numIndices; else numTriangles *= 3;
	hxgl.cross.Context.gl.drawElements(hxgl.cross.Context.gl.TRIANGLES,numTriangles,hxgl.cross.Context.gl.UNSIGNED_SHORT,firstIndex);
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,null);
	$s.pop();
}
hxgl.cross.Context.setVertexBufferAt = function(index,buffer,bufferOffset,format) {
	$s.push("hxgl.cross.Context::setVertexBufferAt");
	var $spos = $s.length;
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
	$s.pop();
}
hxgl.cross.Context.__GL__setMatrix = function(loc,transpose,mat) {
	$s.push("hxgl.cross.Context::__GL__setMatrix");
	var $spos = $s.length;
	var loc1 = hxgl.cross.Context.gl.getUniformLocation(hxgl.cross.Context.__program,loc);
	hxgl.cross.Context.gl.uniformMatrix4fv(loc1,transpose,mat);
	$s.pop();
}
hxgl.cross.Context.createProgram = function() {
	$s.push("hxgl.cross.Context::createProgram");
	var $spos = $s.length;
	var $tmp = new hxgl.cross.data.Program(hxgl.cross.Context.gl.createProgram());
	$s.pop();
	return $tmp;
	$s.pop();
}
hxgl.cross.Context.setProgram = function(program) {
	$s.push("hxgl.cross.Context::setProgram");
	var $spos = $s.length;
	hxgl.cross.Context.__program = program.__prog;
	hxgl.cross.Context.gl.useProgram(hxgl.cross.Context.__program);
	$s.pop();
}
hxgl.cross.Context.present = function() {
	$s.push("hxgl.cross.Context::present");
	var $spos = $s.length;
	$s.pop();
}
hxgl.cross.Context.canvas = null;
hxgl.cross.Context.gl = null;
hxgl.cross.Context.__program = null;
hxgl.cross.Context.prototype.__class__ = hxgl.cross.Context;
if(!hxgl.shaders) hxgl.shaders = {}
hxgl.shaders.VecTools = function() { }
hxgl.shaders.VecTools.__name__ = ["hxgl","shaders","VecTools"];
hxgl.shaders.VecTools.prototype.__class__ = hxgl.shaders.VecTools;
PulsingTriangle = function(p) {
	if( p === $_ ) return;
	$s.push("PulsingTriangle::new");
	var $spos = $s.length;
	hxgl.cross.Context.configureBackBuffer(512,512,4);
	this._shader = new hxgl.shaders.NormalWriter();
	this._ct = 0.0;
	var t = new haxe.Timer(33);
	t.run = $closure(this,"update");
	haxe.Log.trace("Hello World",{ fileName : "PulsingTriangle.hx", lineNumber : 19, className : "PulsingTriangle", methodName : "new"});
	$s.pop();
}
PulsingTriangle.__name__ = ["PulsingTriangle"];
PulsingTriangle.main = function() {
	$s.push("PulsingTriangle::main");
	var $spos = $s.length;
	hxgl.cross.Context.init(function() {
		$s.push("PulsingTriangle::main@85");
		var $spos = $s.length;
		new PulsingTriangle();
		$s.pop();
	});
	$s.pop();
}
PulsingTriangle.prototype.update = function() {
	$s.push("PulsingTriangle::update");
	var $spos = $s.length;
	this._ct += .05;
	hxgl.cross.Context.clear(0,0,0,1);
	var vb = hxgl.cross.Context.createVertexBuffer(3,6);
	var ib = hxgl.cross.Context.createIndexBuffer(3);
	vb.upload([0.0,0.0,.5,1.0,0.0,0.0,1.0,0.0,.5,0.0,1.0,0.0,0.0,1.0,.5,0.0,0.0,1.0],0,3);
	ib.upload([0,1,2],0,3);
	var dst = Math.sin(this._ct);
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
	this._shader.init({ mview : [1,0,0,0,0,1,0,0,0,0,1,0,0,0,-5 + dst * 3,1.0], proj : [m11,0,0,0,0,m22,0,0,0,0,m33,m34,0,0,m43,1.0]},{ });
	this._shader.bind(vb);
	hxgl.cross.Context.drawTriangles(ib);
	hxgl.cross.Context.present();
	$s.pop();
}
PulsingTriangle.prototype._shader = null;
PulsingTriangle.prototype._ct = null;
PulsingTriangle.prototype.__class__ = PulsingTriangle;
js.Lib = function() { }
js.Lib.__name__ = ["js","Lib"];
js.Lib.isIE = null;
js.Lib.isOpera = null;
js.Lib.document = null;
js.Lib.window = null;
js.Lib.alert = function(v) {
	$s.push("js.Lib::alert");
	var $spos = $s.length;
	alert(js.Boot.__string_rec(v,""));
	$s.pop();
}
js.Lib.eval = function(code) {
	$s.push("js.Lib::eval");
	var $spos = $s.length;
	var $tmp = eval(code);
	$s.pop();
	return $tmp;
	$s.pop();
}
js.Lib.setErrorHandler = function(f) {
	$s.push("js.Lib::setErrorHandler");
	var $spos = $s.length;
	js.Lib.onerror = f;
	$s.pop();
}
js.Lib.prototype.__class__ = js.Lib;
if(!hxgl.cross.data) hxgl.cross.data = {}
hxgl.cross.data.IndexBuffer = function(id,numIndices) {
	if( id === $_ ) return;
	$s.push("hxgl.cross.data.IndexBuffer::new");
	var $spos = $s.length;
	this.id = id;
	this.numIndices = numIndices;
	$s.pop();
}
hxgl.cross.data.IndexBuffer.__name__ = ["hxgl","cross","data","IndexBuffer"];
hxgl.cross.data.IndexBuffer.prototype.upload = function(indices,offset,numInds) {
	$s.push("hxgl.cross.data.IndexBuffer::upload");
	var $spos = $s.length;
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,this.id);
	hxgl.cross.Context.gl.bufferSubData(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,0,new Uint16Array(indices));
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ELEMENT_ARRAY_BUFFER,null);
	$s.pop();
}
hxgl.cross.data.IndexBuffer.prototype.id = null;
hxgl.cross.data.IndexBuffer.prototype.numIndices = null;
hxgl.cross.data.IndexBuffer.prototype.__class__ = hxgl.cross.data.IndexBuffer;
if(typeof haxe=='undefined') haxe = {}
haxe.Log = function() { }
haxe.Log.__name__ = ["haxe","Log"];
haxe.Log.trace = function(v,infos) {
	$s.push("haxe.Log::trace");
	var $spos = $s.length;
	js.Boot.__trace(v,infos);
	$s.pop();
}
haxe.Log.clear = function() {
	$s.push("haxe.Log::clear");
	var $spos = $s.length;
	js.Boot.__clear_trace();
	$s.pop();
}
haxe.Log.prototype.__class__ = haxe.Log;
Std = function() { }
Std.__name__ = ["Std"];
Std["is"] = function(v,t) {
	$s.push("Std::is");
	var $spos = $s.length;
	var $tmp = js.Boot.__instanceof(v,t);
	$s.pop();
	return $tmp;
	$s.pop();
}
Std.string = function(s) {
	$s.push("Std::string");
	var $spos = $s.length;
	var $tmp = js.Boot.__string_rec(s,"");
	$s.pop();
	return $tmp;
	$s.pop();
}
Std["int"] = function(x) {
	$s.push("Std::int");
	var $spos = $s.length;
	if(x < 0) {
		var $tmp = Math.ceil(x);
		$s.pop();
		return $tmp;
	}
	var $tmp = Math.floor(x);
	$s.pop();
	return $tmp;
	$s.pop();
}
Std.parseInt = function(x) {
	$s.push("Std::parseInt");
	var $spos = $s.length;
	var v = parseInt(x,10);
	if(v == 0 && x.charCodeAt(1) == 120) v = parseInt(x);
	if(isNaN(v)) {
		$s.pop();
		return null;
	}
	var $tmp = v;
	$s.pop();
	return $tmp;
	$s.pop();
}
Std.parseFloat = function(x) {
	$s.push("Std::parseFloat");
	var $spos = $s.length;
	var $tmp = parseFloat(x);
	$s.pop();
	return $tmp;
	$s.pop();
}
Std.random = function(x) {
	$s.push("Std::random");
	var $spos = $s.length;
	var $tmp = Math.floor(Math.random() * x);
	$s.pop();
	return $tmp;
	$s.pop();
}
Std.prototype.__class__ = Std;
hxgl.shaders.NormalWriter = function(p) {
	if( p === $_ ) return;
	$s.push("hxgl.shaders.NormalWriter::new");
	var $spos = $s.length;
	this.__program = hxgl.cross.Context.createProgram();
	this.__program.upload(hxgl.shaders.NormalWriter.vertex,hxgl.shaders.NormalWriter.fragment);
	$s.pop();
}
hxgl.shaders.NormalWriter.__name__ = ["hxgl","shaders","NormalWriter"];
hxgl.shaders.NormalWriter.prototype.init = function(vertex,fragment) {
	$s.push("hxgl.shaders.NormalWriter::init");
	var $spos = $s.length;
	hxgl.cross.Context.setProgram(this.__program);
	hxgl.cross.Context.__GL__setMatrix("mview",false,vertex.mview);
	hxgl.cross.Context.__GL__setMatrix("proj",false,vertex.proj);
	$s.pop();
}
hxgl.shaders.NormalWriter.prototype.bind = function(vbuffer) {
	$s.push("hxgl.shaders.NormalWriter::bind");
	var $spos = $s.length;
	hxgl.cross.Context.setVertexBufferAt("pos",vbuffer,0,"float3");
	hxgl.cross.Context.setVertexBufferAt("norm",vbuffer,3,"float3");
	$s.pop();
}
hxgl.shaders.NormalWriter.prototype.__program = null;
hxgl.shaders.NormalWriter.prototype.__class__ = hxgl.shaders.NormalWriter;
hxgl.cross.data.Program = function(prog) {
	if( prog === $_ ) return;
	$s.push("hxgl.cross.data.Program::new");
	var $spos = $s.length;
	this.__prog = prog;
	$s.pop();
}
hxgl.cross.data.Program.__name__ = ["hxgl","cross","data","Program"];
hxgl.cross.data.Program.prototype.upload = function(vertexProgram,fragmentProgram) {
	$s.push("hxgl.cross.data.Program::upload");
	var $spos = $s.length;
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
	$s.pop();
}
hxgl.cross.data.Program.prototype.__prog = null;
hxgl.cross.data.Program.prototype.__vertex = null;
hxgl.cross.data.Program.prototype.__fragment = null;
hxgl.cross.data.Program.prototype.__class__ = hxgl.cross.data.Program;
haxe.Timer = function(time_ms) {
	if( time_ms === $_ ) return;
	$s.push("haxe.Timer::new");
	var $spos = $s.length;
	var arr = haxe_timers;
	this.id = arr.length;
	arr[this.id] = this;
	this.timerId = window.setInterval("haxe_timers[" + this.id + "].run();",time_ms);
	$s.pop();
}
haxe.Timer.__name__ = ["haxe","Timer"];
haxe.Timer.delay = function(f,time_ms) {
	$s.push("haxe.Timer::delay");
	var $spos = $s.length;
	var t = new haxe.Timer(time_ms);
	t.run = function() {
		$s.push("haxe.Timer::delay@79");
		var $spos = $s.length;
		t.stop();
		f();
		$s.pop();
	};
	$s.pop();
	return t;
	$s.pop();
}
haxe.Timer.measure = function(f,pos) {
	$s.push("haxe.Timer::measure");
	var $spos = $s.length;
	var t0 = haxe.Timer.stamp();
	var r = f();
	haxe.Log.trace(haxe.Timer.stamp() - t0 + "s",pos);
	$s.pop();
	return r;
	$s.pop();
}
haxe.Timer.stamp = function() {
	$s.push("haxe.Timer::stamp");
	var $spos = $s.length;
	var $tmp = Date.now().getTime() / 1000;
	$s.pop();
	return $tmp;
	$s.pop();
}
haxe.Timer.prototype.id = null;
haxe.Timer.prototype.timerId = null;
haxe.Timer.prototype.stop = function() {
	$s.push("haxe.Timer::stop");
	var $spos = $s.length;
	if(this.id == null) {
		$s.pop();
		return;
	}
	window.clearInterval(this.timerId);
	var arr = haxe_timers;
	arr[this.id] = null;
	if(this.id > 100 && this.id == arr.length - 1) {
		var p = this.id - 1;
		while(p >= 0 && arr[p] == null) p--;
		arr = arr.slice(0,p + 1);
	}
	this.id = null;
	$s.pop();
}
haxe.Timer.prototype.run = function() {
	$s.push("haxe.Timer::run");
	var $spos = $s.length;
	$s.pop();
}
haxe.Timer.prototype.__class__ = haxe.Timer;
hxgl.cross.data.VertexBuffer = function(id,bsize) {
	if( id === $_ ) return;
	$s.push("hxgl.cross.data.VertexBuffer::new");
	var $spos = $s.length;
	this.id = id;
	this.__bsize = bsize;
	$s.pop();
}
hxgl.cross.data.VertexBuffer.__name__ = ["hxgl","cross","data","VertexBuffer"];
hxgl.cross.data.VertexBuffer.prototype.upload = function(vertices,offset,numVerts) {
	$s.push("hxgl.cross.data.VertexBuffer::upload");
	var $spos = $s.length;
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,this.id);
	hxgl.cross.Context.gl.bufferSubData(hxgl.cross.Context.gl.ARRAY_BUFFER,0,new Float32Array(vertices));
	hxgl.cross.Context.gl.bindBuffer(hxgl.cross.Context.gl.ARRAY_BUFFER,null);
	$s.pop();
}
hxgl.cross.data.VertexBuffer.prototype.id = null;
hxgl.cross.data.VertexBuffer.prototype.__bsize = null;
hxgl.cross.data.VertexBuffer.prototype.__class__ = hxgl.cross.data.VertexBuffer;
IntIter = function(min,max) {
	if( min === $_ ) return;
	$s.push("IntIter::new");
	var $spos = $s.length;
	this.min = min;
	this.max = max;
	$s.pop();
}
IntIter.__name__ = ["IntIter"];
IntIter.prototype.min = null;
IntIter.prototype.max = null;
IntIter.prototype.hasNext = function() {
	$s.push("IntIter::hasNext");
	var $spos = $s.length;
	var $tmp = this.min < this.max;
	$s.pop();
	return $tmp;
	$s.pop();
}
IntIter.prototype.next = function() {
	$s.push("IntIter::next");
	var $spos = $s.length;
	var $tmp = this.min++;
	$s.pop();
	return $tmp;
	$s.pop();
}
IntIter.prototype.__class__ = IntIter;
$_ = {}
js.Boot.__res = {}
$s = [];
$e = [];
js.Boot.__init();
{
	var d = Date;
	d.now = function() {
		$s.push("IntIter::next");
		var $spos = $s.length;
		var $tmp = new Date();
		$s.pop();
		return $tmp;
		$s.pop();
	};
	d.fromTime = function(t) {
		$s.push("IntIter::next");
		var $spos = $s.length;
		var d1 = new Date();
		d1["setTime"](t);
		$s.pop();
		return d1;
		$s.pop();
	};
	d.fromString = function(s) {
		$s.push("IntIter::next");
		var $spos = $s.length;
		switch(s.length) {
		case 8:
			var k = s.split(":");
			var d1 = new Date();
			d1["setTime"](0);
			d1["setUTCHours"](k[0]);
			d1["setUTCMinutes"](k[1]);
			d1["setUTCSeconds"](k[2]);
			$s.pop();
			return d1;
		case 10:
			var k = s.split("-");
			var $tmp = new Date(k[0],k[1] - 1,k[2],0,0,0);
			$s.pop();
			return $tmp;
		case 19:
			var k = s.split(" ");
			var y = k[0].split("-");
			var t = k[1].split(":");
			var $tmp = new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
			$s.pop();
			return $tmp;
		default:
			throw "Invalid date format : " + s;
		}
		$s.pop();
	};
	d.prototype["toString"] = function() {
		$s.push("IntIter::next");
		var $spos = $s.length;
		var date = this;
		var m = date.getMonth() + 1;
		var d1 = date.getDate();
		var h = date.getHours();
		var mi = date.getMinutes();
		var s = date.getSeconds();
		var $tmp = date.getFullYear() + "-" + (m < 10?"0" + m:"" + m) + "-" + (d1 < 10?"0" + d1:"" + d1) + " " + (h < 10?"0" + h:"" + h) + ":" + (mi < 10?"0" + mi:"" + mi) + ":" + (s < 10?"0" + s:"" + s);
		$s.pop();
		return $tmp;
		$s.pop();
	};
	d.prototype.__class__ = d;
	d.__name__ = ["Date"];
}
{
	js.Lib.document = document;
	js.Lib.window = window;
	onerror = function(msg,url,line) {
		var stack = $s.copy();
		var f = js.Lib.onerror;
		$s.splice(0,$s.length);
		if( f == null ) {
			var i = stack.length;
			var s = "";
			while( --i >= 0 )
				s += "Called from "+stack[i]+"\n";
			alert(msg+"\n\n"+s);
			return false;
		}
		return f(msg,stack);
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
		$s.push("IntIter::next");
		var $spos = $s.length;
		var $tmp = isFinite(i);
		$s.pop();
		return $tmp;
		$s.pop();
	};
	Math.isNaN = function(i) {
		$s.push("IntIter::next");
		var $spos = $s.length;
		var $tmp = isNaN(i);
		$s.pop();
		return $tmp;
		$s.pop();
	};
}
if(typeof(haxe_timers) == "undefined") haxe_timers = [];
js.Lib.onerror = null;
hxgl.shaders.NormalWriter.vertex = "\n\t\tattribute vec3 pos;\n\t\tattribute vec3 norm;\n\t\tvarying vec3 normal;\n\t\tuniform mat4 mview;\n\t\tuniform mat4 proj;\n\t\tvoid main() {\n\t\t\tgl_Position = proj * mview * vec4(pos, 1.0);\n\t\t\tnormal = norm;\n\t\t}\n\t\t";
hxgl.shaders.NormalWriter.fragment = "#ifdef GL_ES\n" + "precision highp float;\n" + "#endif\n" + "varying vec3 normal;" + "void main() {" + "\tgl_FragColor = vec4 (normal.xyz, 1);" + "}";
PulsingTriangle.main()