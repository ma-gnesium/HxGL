var HXGL = (function () {
	var _canvas;
	var gl;

	var eframe;
	var firstRun = true;
	function setEnterFrame (fnc)
	{
		eframe = fnc;
	}
	
	function _eCallback ()
	{
		if (eframe != null)
		{
			eframe ();
		}
		setTimeout (_eCallback,0);
	}
	
	function throwOnglError(err, funcName, args) {
	  alert ( WebGLDebugUtils.glEnumToString(err) + " was caused by call to " + funcName);
	};

	function init (major, minor)
	{
		_canvas = document.getElementById ("webGLCanvas");
		gl = _canvas.getContext("experimental-webgl");
		if (!(typeof WebGLDebugUtils === 'undefined'))
		{
			gl = WebGLDebugUtils.makeDebugContext(gl, throwOnglError);
		}
		if (!gl)
		{
			alert ("Could not create context, Hxgl init failed");
			return;
		}
		
		gl.viewport (0,0,_canvas.width,_canvas.height);
		gl.enable (gl.DEPTH_TEST);
		
		_eCallback ();
		
		return gl;
	}

	function clear (red,green,blue,alpha,depth,stencil,mask)
	{
		gl.clearColor (red,green,blue,alpha);
		gl.clearDepth (depth);
		
		gl.clear (gl.COLOR_BUFFER_BIT|gl.DEPTH_BUFFER_BIT);
	}

	function createVertexBuffer (sizeBytes)
	{
		var vbo = gl.createBuffer ();
		gl.bindBuffer (gl.ARRAY_BUFFER, vbo);
		gl.bufferData (gl.ARRAY_BUFFER, sizeBytes, gl.STATIC_DRAW);
		gl.bindBuffer (gl.ARRAY_BUFFER, null);
		return vbo;
	}

	function createIndexBuffer (sizeBytes)
	{
		var ibo = gl.createBuffer ();
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, ibo);
		gl.bufferData (gl.ELEMENT_ARRAY_BUFFER, sizeBytes, gl.STATIC_DRAW);
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, null);
		return ibo;
	}

	function uploadFromByteArrayVertex (vboID,data,byteArrayOffset,startOffset,totalBytes)
	{
		gl.bindBuffer (gl.ARRAY_BUFFER, vboID);
		var view = new Uint8Array (data,byteArrayOffset,totalBytes);
		gl.bufferSubData (gl.ARRAY_BUFFER, startOffset, view);
		gl.bindBuffer (gl.ARRAY_BUFFER, null);
	}

	//Entries in float form
	function uploadFromVectorVertex (vboID,data,startEntry,totalEntries)
	{
		if (startEntry != 0) alert ("uploadFromVectorVector(): startEntry/totalEntries not yet supported!");
		gl.bindBuffer (gl.ARRAY_BUFFER, vboID);
		var view = new Float32Array (data);
		gl.bufferSubData (gl.ARRAY_BUFFER, 0, view);
		gl.bindBuffer (gl.ARRAY_BUFFER, null);
	}

	//Entries in float form
	function uploadFromVectorIndex (iboID,data,startEntry,totalEntries)
	{
		if (startEntry != 0) alert ("uploadFromVectorIndex(): startEntry/totalEntries not yet supported!");
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, iboID);
		var view = new Uint16Array (data);
		gl.bufferSubData (gl.ELEMENT_ARRAY_BUFFER, 0, view);
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, null);
	}

	function uploadFromByteArrayIndex (iboID,data,byteArrayOffset,startOffset,totalBytes)
	{
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, iboID);
		var view = new Uint8Array (data,byteArrayOffset,totalBytes);
		gl.bufferSubData (gl.ELEMENT_ARRAY_BUFFER, startOffset, view);
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, null);
	}

	function drawTriangles (iboID, firstIndex, numTriangles)
	{
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, iboID);
		gl.drawElements (gl.TRIANGLES, numTriangles*3, gl.UNSIGNED_SHORT, firstIndex*2);
		gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, null);
	}

	function createProgram ()
	{
		return gl.createProgram ();
	}

	function uploadProgram (program, vertex, fragment)
	{
		var vertexShader = gl.createShader(gl.VERTEX_SHADER);
		gl.shaderSource(vertexShader, vertex);
		gl.compileShader(vertexShader);
		if(!gl.getShaderParameter(vertexShader, gl.COMPILE_STATUS)) {
			document.write("Couldn't compile the vertex shader\n" + gl.getShaderInfoLog (vertexShader));
			gl.deleteShader(vertexShader);
			return;
		}
		
		var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
		gl.shaderSource(fragmentShader, fragment);
		gl.compileShader(fragmentShader);
		if(!gl.getShaderParameter(fragmentShader, gl.COMPILE_STATUS)) {
			document.write("Couldn't compile the fragment shader\n" + gl.getShaderInfoLog (fragmentShader));
			gl.deleteShader(fragmentShader);
			return;
		}

		gl.attachShader(program, vertexShader);
		gl.attachShader(program, fragmentShader);
		gl.linkProgram(program);
		if (!gl.getProgramParameter(program, gl.LINK_STATUS)) {
			alert("Unable to initialise shaders");
			gl.deleteProgram(program);
			gl.deleteProgram(vertexShader);
			gl.deleteProgram(fragmentShader);
			return;
		}
	}

	function setProgram (program)
	{
		gl.program = program;
		gl.useProgram (program);		
	}

	function setVertexBufferAt (loc,vboID,bufferOffset,stride,format)
	{
		var type = gl.FLOAT;
		var size = 3;
		
		switch (format)
		{
			case "float1":
				size = 1;
				break;	
			case "float2":
				size = 2;
				break;	
			case "float3":
				size = 3;
				break;	
			case "float4":
				size = 4;
				break;			
		}
		
		if (null==vboID)
		{
			var li = gl.getAttribLocation (gl.program, loc);
			if (null == li) alert ("setVertexBufferAt (): No such attribute["+loc+"]");
			gl.disableVertexAttribArray (li);
		}
		else
		{
			gl.bindBuffer (gl.ARRAY_BUFFER,vboID);
			
			var li = gl.getAttribLocation (gl.program, loc);
			if (-1 == li) alert ("setVertexBufferAt (): No such attribute["+loc+"]");
			
			gl.vertexAttribPointer (li,size,type,false,stride,bufferOffset);
			gl.enableVertexAttribArray (li);
		}
	}
	
	function configureBackBuffer (width,height,antiAlias,enableDepthAndStencil)
	{
		//TODO implement
	}
	
	function setCulling (triangleFaceToCull)
	{
		switch (triangleFaceToCull)
		{
			case "none":
				gl.disable(gl.CULL_FACE);
				break;
			case "back":
				gl.enable(gl.CULL_FACE);
				gl.cullFace(gl.BACK);
				break;
			case "front":
				gl.enable(gl.CULL_FACE);
				gl.cullFace(gl.FRONT);
				break;
			case "frontAndBack":
				gl.enable(gl.CULL_FACE);
				gl.cullFace(gl.FRONT_AND_BACK);
				break;
			default: alert ("HXGL: Invalid triangleFaceToCull");
		}
	}
	
	function setDepthTest (depthMask, passCompareMode)
	{
		gl.depthMask (depthMask);
		switch (passCompareMode)
		{
			case "always":
				gl.depthFunc(gl.ALWAYS);
				break;
			case "equal":
				gl.depthFunc(gl.EQUAL);
				break;
			case "greater":
				gl.depthFunc(gl.GREATER);
				break;
			case "greaterEqual":
				gl.depthFunc(gl.GEQUAL);
				break;
			case "less":
				gl.depthFunc(gl.LESS);
				break;
			case "lessEqual":
				gl.depthFunc(gl.LEQUAL);
				break;
			case "never":
				gl.depthFunc(gl.NEVER);
				break;
			case "notEqual":
				gl.depthFunc(gl.NOTEQUAL);
				break;
			default: alert ("HXGL: Invalid passCompareMode");
		}
	}
	
	function uploadFromByteArrayBuffer (boID, data, byteArrayOffset, startOffset, totalBytes)
	{
		alert ("uploadFromByteArray*() is not implemented in haXe/js");
	}
	
	function disposeProgram (program)
	{
		alert ("disposeProgram() is not implemented in haXe/js");
	}
	
	function createTexture (width, height, format, optimizeForRenderToTexture)
	{
		var tID = gl.createTexture ();
		gl.bindTexture (gl.TEXTURE_2D, tID);
		
		gl.texParameteri (gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.REPEAT);
		gl.texParameteri (gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.REPEAT);
		gl.texParameteri (gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
		gl.texParameteri (gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
		
		return tID;
	}
	
	function uploadFromByteArrayTexture (tID,data,byteArrayOffset,width,height)
	{
		var view = new Uint8Array (data);
		gl.bindTexture (gl.TEXTURE_2D, tID);	
		
        gl.texImage2D (gl.TEXTURE_2D, 0, gl.RGBA, width, height, 0, gl.RGBA, gl.UNSIGNED_BYTE, view);
	}
	
	function setTextureAt (loc,sampler,tID)
	{
		if (null == tID)
		{
			document.write ("Trying setnull<br>");
			gl.bindTexture (GL_TEXTURE_2D, null);
		}
		else
		{
			var li = gl.getUniformLocation (gl.program, loc);
			if (null == li) alert ("setTextureAt (): No such uniform["+li+"]");
			
			gl.activeTexture (gl.TEXTURE0);
			gl.bindTexture (gl.TEXTURE_2D, tID);
			gl.uniform1i (li, 0);
		}
	}
	
	function setMatrixAt (loc,count,transpose,data)
	{
		var li = gl.getUniformLocation (gl.program, loc);
		if (null == li) alert ("setMatrixAt (): No such uniform["+li+"]");
		gl.uniformMatrix4fv (li,transpose,data);
	}
	
	function disposeTexture (tID)
	{
		gl.deleteTexture (tID);
	}
	
	function disposeBuffer (boID)
	{
		gl.deleteBuffer (boID);
	}
	
	function getDigital (id)
	{
		alert ("hxgl.getToggle (): Not yet implemented");
		return -1;
	}
	
	function getToggle (id)
	{
		alert ("hxgl.getToggle (): Not yet implemented");
		return -1;
	}
	
	return {
		init:init,
		uploadProgram:uploadProgram,
		createProgram:createProgram,
		setProgram:setProgram,
		clear:clear,
		createIndexBuffer:createIndexBuffer,
		createVertexBuffer:createVertexBuffer,
		uploadFromVectorIndex:uploadFromVectorIndex,
		uploadFromVectorVertex:uploadFromVectorVertex,
		setVertexBufferAt:setVertexBufferAt,	
		drawTriangles:drawTriangles,
		setEnterFrame:setEnterFrame,
		configureBackBuffer:configureBackBuffer,
		setDepthTest:setDepthTest,
		uploadFromByteArrayVertex:uploadFromByteArrayBuffer,
		uploadFromByteArrayIndex:uploadFromByteArrayBuffer,
		disposeProgram:disposeProgram,
		createTexture:createTexture,
		uploadFromByteArrayTexture:uploadFromByteArrayTexture,
		setTextureAt:setTextureAt,
		setMatrixAt:setMatrixAt,
		disposeTexture:disposeTexture,
		disposeBuffer:disposeBuffer,
		setCulling:setCulling,
		getDigital:getDigital,
		getToggle:getToggle,
	};
})();
