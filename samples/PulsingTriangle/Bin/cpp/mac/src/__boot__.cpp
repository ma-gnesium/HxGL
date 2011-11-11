#include <hxcpp.h>

#include <hxgl/cross/Context.h>
#include <Hash.h>
#include <hxgl/core/GL.h>
#include <hxgl/shaders/VecTools.h>
#include <cpp/Sys.h>
#include <haxe/io/BytesOutput.h>
#include <haxe/io/Eof.h>
#include <PulsingTriangle.h>
#include <Std.h>
#include <hxgl/cross/data/Program.h>
#include <haxe/io/Error.h>
#include <hxgl/shaders/NormalWriter.h>
#include <haxe/Timer.h>
#include <hxgl/cross/data/VertexBuffer.h>
#include <IntIter.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/Output.h>
#include <hxgl/cross/data/IndexBuffer.h>
#include <StringBuf.h>
#include <haxe/Log.h>
#include <haxe/io/Input.h>
#include <cpp/Lib.h>
#include <haxe/io/BytesBuffer.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::hxgl::cross::Context_obj::__register();
::Hash_obj::__register();
::hxgl::core::GL_obj::__register();
::hxgl::shaders::VecTools_obj::__register();
::cpp::Sys_obj::__register();
::haxe::io::BytesOutput_obj::__register();
::haxe::io::Eof_obj::__register();
::PulsingTriangle_obj::__register();
::Std_obj::__register();
::hxgl::cross::data::Program_obj::__register();
::haxe::io::Error_obj::__register();
::hxgl::shaders::NormalWriter_obj::__register();
::haxe::Timer_obj::__register();
::hxgl::cross::data::VertexBuffer_obj::__register();
::IntIter_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::io::Output_obj::__register();
::hxgl::cross::data::IndexBuffer_obj::__register();
::StringBuf_obj::__register();
::haxe::Log_obj::__register();
::haxe::io::Input_obj::__register();
::cpp::Lib_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::cpp::Lib_obj::__boot();
::haxe::Log_obj::__boot();
::cpp::Sys_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Input_obj::__boot();
::StringBuf_obj::__boot();
::hxgl::cross::data::IndexBuffer_obj::__boot();
::haxe::io::Output_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::IntIter_obj::__boot();
::hxgl::cross::data::VertexBuffer_obj::__boot();
::haxe::Timer_obj::__boot();
::hxgl::shaders::NormalWriter_obj::__boot();
::haxe::io::Error_obj::__boot();
::hxgl::cross::data::Program_obj::__boot();
::Std_obj::__boot();
::PulsingTriangle_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::BytesOutput_obj::__boot();
::hxgl::shaders::VecTools_obj::__boot();
::hxgl::core::GL_obj::__boot();
::Hash_obj::__boot();
::hxgl::cross::Context_obj::__boot();
}

