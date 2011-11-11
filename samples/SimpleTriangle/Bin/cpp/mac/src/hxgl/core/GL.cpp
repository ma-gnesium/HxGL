#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_hxgl_core_GL
#include <hxgl/core/GL.h>
#endif
namespace hxgl{
namespace core{

Void GL_obj::__construct()
{
{
	HX_SOURCE_POS("../../hxgl/core/GL.hx",341)
	this->DEPTH_BUFFER_BIT = (int)256;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",342)
	this->STENCIL_BUFFER_BIT = (int)1024;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",343)
	this->COLOR_BUFFER_BIT = (int)16384;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",344)
	this->POINTS = (int)0;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",345)
	this->LINES = (int)1;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",346)
	this->LINE_LOOP = (int)2;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",347)
	this->LINE_STRIP = (int)3;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",348)
	this->TRIANGLES = (int)4;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",349)
	this->TRIANGLE_STRIP = (int)5;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",350)
	this->TRIANGLE_FAN = (int)6;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",351)
	this->ZERO = (int)0;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",352)
	this->ONE = (int)1;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",353)
	this->SRC_COLOR = (int)768;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",354)
	this->ONE_MINUS_SRC_COLOR = (int)769;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",355)
	this->SRC_ALPHA = (int)770;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",356)
	this->ONE_MINUS_SRC_ALPHA = (int)771;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",357)
	this->DST_ALPHA = (int)772;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",358)
	this->ONE_MINUS_DST_ALPHA = (int)773;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",359)
	this->DST_COLOR = (int)774;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",360)
	this->ONE_MINUS_DST_COLOR = (int)775;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",361)
	this->SRC_ALPHA_SATURATE = (int)776;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",362)
	this->FUNC_ADD = (int)32774;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",363)
	this->BLEND_EQUATION = (int)32777;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",364)
	this->BLEND_EQUATION_RGB = (int)32777;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",365)
	this->BLEND_EQUATION_ALPHA = (int)34877;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",366)
	this->FUNC_SUBTRACT = (int)32778;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",367)
	this->FUNC_REVERSE_SUBTRACT = (int)32779;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",368)
	this->BLEND_DST_RGB = (int)32968;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",369)
	this->BLEND_SRC_RGB = (int)32969;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",370)
	this->BLEND_DST_ALPHA = (int)32970;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",371)
	this->BLEND_SRC_ALPHA = (int)32971;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",372)
	this->CONSTANT_COLOR = (int)32769;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",373)
	this->ONE_MINUS_CONSTANT_COLOR = (int)32770;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",374)
	this->CONSTANT_ALPHA = (int)32771;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",375)
	this->ONE_MINUS_CONSTANT_ALPHA = (int)32772;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",376)
	this->BLEND_COLOR = (int)32773;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",377)
	this->ARRAY_BUFFER = (int)34962;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",378)
	this->ELEMENT_ARRAY_BUFFER = (int)34963;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",379)
	this->ARRAY_BUFFER_BINDING = (int)34964;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",380)
	this->ELEMENT_ARRAY_BUFFER_BINDING = (int)34965;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",381)
	this->STREAM_DRAW = (int)35040;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",382)
	this->STATIC_DRAW = (int)35044;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",383)
	this->DYNAMIC_DRAW = (int)35048;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",384)
	this->BUFFER_SIZE = (int)34660;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",385)
	this->BUFFER_USAGE = (int)34661;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",386)
	this->CURRENT_VERTEX_ATTRIB = (int)34342;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",387)
	this->FRONT = (int)1028;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",388)
	this->BACK = (int)1029;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",389)
	this->FRONT_AND_BACK = (int)1032;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",390)
	this->CULL_FACE = (int)2884;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",391)
	this->BLEND = (int)3042;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",392)
	this->DITHER = (int)3024;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",393)
	this->STENCIL_TEST = (int)2960;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",394)
	this->DEPTH_TEST = (int)2929;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",395)
	this->SCISSOR_TEST = (int)3089;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",396)
	this->POLYGON_OFFSET_FILL = (int)32823;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",397)
	this->SAMPLE_ALPHA_TO_COVERAGE = (int)32926;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",398)
	this->SAMPLE_COVERAGE = (int)32928;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",399)
	this->NO_ERROR = (int)0;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",400)
	this->INVALID_ENUM = (int)1280;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",401)
	this->INVALID_VALUE = (int)1281;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",402)
	this->INVALID_OPERATION = (int)1282;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",403)
	this->OUT_OF_MEMORY = (int)1285;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",404)
	this->CW = (int)2304;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",405)
	this->CCW = (int)2305;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",406)
	this->LINE_WIDTH = (int)2849;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",407)
	this->ALIASED_POINT_SIZE_RANGE = (int)33901;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",408)
	this->ALIASED_LINE_WIDTH_RANGE = (int)33902;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",409)
	this->CULL_FACE_MODE = (int)2885;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",410)
	this->FRONT_FACE = (int)2886;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",411)
	this->DEPTH_RANGE = (int)2928;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",412)
	this->DEPTH_WRITEMASK = (int)2930;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",413)
	this->DEPTH_CLEAR_VALUE = (int)2931;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",414)
	this->DEPTH_FUNC = (int)2932;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",415)
	this->STENCIL_CLEAR_VALUE = (int)2961;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",416)
	this->STENCIL_FUNC = (int)2962;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",417)
	this->STENCIL_FAIL = (int)2964;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",418)
	this->STENCIL_PASS_DEPTH_FAIL = (int)2965;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",419)
	this->STENCIL_PASS_DEPTH_PASS = (int)2966;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",420)
	this->STENCIL_REF = (int)2967;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",421)
	this->STENCIL_VALUE_MASK = (int)2963;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",422)
	this->STENCIL_WRITEMASK = (int)2968;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",423)
	this->STENCIL_BACK_FUNC = (int)34816;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",424)
	this->STENCIL_BACK_FAIL = (int)34817;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",425)
	this->STENCIL_BACK_PASS_DEPTH_FAIL = (int)34818;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",426)
	this->STENCIL_BACK_PASS_DEPTH_PASS = (int)34819;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",427)
	this->STENCIL_BACK_REF = (int)36003;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",428)
	this->STENCIL_BACK_VALUE_MASK = (int)36004;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",429)
	this->STENCIL_BACK_WRITEMASK = (int)36005;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",430)
	this->VIEWPORT = (int)2978;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",431)
	this->SCISSOR_BOX = (int)3088;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",432)
	this->COLOR_CLEAR_VALUE = (int)3106;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",433)
	this->COLOR_WRITEMASK = (int)3107;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",434)
	this->UNPACK_ALIGNMENT = (int)3317;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",435)
	this->PACK_ALIGNMENT = (int)3333;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",436)
	this->MAX_TEXTURE_SIZE = (int)3379;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",437)
	this->MAX_VIEWPORT_DIMS = (int)3386;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",438)
	this->SUBPIXEL_BITS = (int)3408;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",439)
	this->RED_BITS = (int)3410;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",440)
	this->GREEN_BITS = (int)3411;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",441)
	this->BLUE_BITS = (int)3412;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",442)
	this->ALPHA_BITS = (int)3413;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",443)
	this->DEPTH_BITS = (int)3414;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",444)
	this->STENCIL_BITS = (int)3415;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",445)
	this->POLYGON_OFFSET_UNITS = (int)10752;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",446)
	this->POLYGON_OFFSET_FACTOR = (int)32824;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",447)
	this->TEXTURE_BINDING_2D = (int)32873;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",448)
	this->SAMPLE_BUFFERS = (int)32936;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",449)
	this->SAMPLES = (int)32937;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",450)
	this->SAMPLE_COVERAGE_VALUE = (int)32938;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",451)
	this->SAMPLE_COVERAGE_INVERT = (int)32939;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",452)
	this->NUM_COMPRESSED_TEXTURE_FORMATS = (int)34466;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",453)
	this->COMPRESSED_TEXTURE_FORMATS = (int)34467;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",454)
	this->DONT_CARE = (int)4352;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",455)
	this->FASTEST = (int)4353;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",456)
	this->NICEST = (int)4354;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",457)
	this->GENERATE_MIPMAP_HINT = (int)33170;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",458)
	this->BYTE = (int)5120;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",459)
	this->UNSIGNED_BYTE = (int)5121;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",460)
	this->SHORT = (int)5122;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",461)
	this->UNSIGNED_SHORT = (int)5123;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",462)
	this->INT = (int)5124;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",463)
	this->UNSIGNED_INT = (int)5125;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",464)
	this->FLOAT = (int)5126;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",465)
	this->DEPTH_COMPONENT = (int)6402;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",466)
	this->ALPHA = (int)6406;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",467)
	this->RGB = (int)6407;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",468)
	this->RGBA = (int)6408;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",469)
	this->LUMINANCE = (int)6409;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",470)
	this->LUMINANCE_ALPHA = (int)6410;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",471)
	this->UNSIGNED_SHORT_4_4_4_4 = (int)32819;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",472)
	this->UNSIGNED_SHORT_5_5_5_1 = (int)32820;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",473)
	this->UNSIGNED_SHORT_5_6_5 = (int)33635;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",474)
	this->FRAGMENT_SHADER = (int)35632;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",475)
	this->VERTEX_SHADER = (int)35633;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",476)
	this->MAX_VERTEX_ATTRIBS = (int)34921;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",477)
	this->MAX_VERTEX_UNIFORM_VECTORS = (int)36347;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",478)
	this->MAX_VARYING_VECTORS = (int)36348;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",479)
	this->MAX_COMBINED_TEXTURE_IMAGE_UNITS = (int)35661;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",480)
	this->MAX_VERTEX_TEXTURE_IMAGE_UNITS = (int)35660;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",481)
	this->MAX_TEXTURE_IMAGE_UNITS = (int)34930;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",482)
	this->MAX_FRAGMENT_UNIFORM_VECTORS = (int)36349;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",483)
	this->SHADER_TYPE = (int)35663;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",484)
	this->DELETE_STATUS = (int)35712;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",485)
	this->LINK_STATUS = (int)35714;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",486)
	this->VALIDATE_STATUS = (int)35715;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",487)
	this->ATTACHED_SHADERS = (int)35717;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",488)
	this->ACTIVE_UNIFORMS = (int)35718;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",489)
	this->ACTIVE_ATTRIBUTES = (int)35721;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",490)
	this->SHADING_LANGUAGE_VERSION = (int)35724;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",491)
	this->CURRENT_PROGRAM = (int)35725;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",492)
	this->NEVER = (int)512;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",493)
	this->LESS = (int)513;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",494)
	this->EQUAL = (int)514;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",495)
	this->LEQUAL = (int)515;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",496)
	this->GREATER = (int)516;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",497)
	this->NOTEQUAL = (int)517;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",498)
	this->GEQUAL = (int)518;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",499)
	this->ALWAYS = (int)519;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",500)
	this->KEEP = (int)7680;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",501)
	this->REPLACE = (int)7681;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",502)
	this->INCR = (int)7682;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",503)
	this->DECR = (int)7683;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",504)
	this->INVERT = (int)5386;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",505)
	this->INCR_WRAP = (int)34055;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",506)
	this->DECR_WRAP = (int)34056;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",507)
	this->VENDOR = (int)7936;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",508)
	this->RENDERER = (int)7937;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",509)
	this->VERSION = (int)7938;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",510)
	this->NEAREST = (int)9728;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",511)
	this->LINEAR = (int)9729;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",512)
	this->NEAREST_MIPMAP_NEAREST = (int)9984;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",513)
	this->LINEAR_MIPMAP_NEAREST = (int)9985;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",514)
	this->NEAREST_MIPMAP_LINEAR = (int)9986;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",515)
	this->LINEAR_MIPMAP_LINEAR = (int)9987;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",516)
	this->TEXTURE_MAG_FILTER = (int)10240;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",517)
	this->TEXTURE_MIN_FILTER = (int)10241;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",518)
	this->TEXTURE_WRAP_S = (int)10242;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",519)
	this->TEXTURE_WRAP_T = (int)10243;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",520)
	this->TEXTURE_2D = (int)3553;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",521)
	this->TEXTURE = (int)5890;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",522)
	this->TEXTURE_CUBE_MAP = (int)34067;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",523)
	this->TEXTURE_BINDING_CUBE_MAP = (int)34068;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",524)
	this->TEXTURE_CUBE_MAP_POSITIVE_X = (int)34069;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",525)
	this->TEXTURE_CUBE_MAP_NEGATIVE_X = (int)34070;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",526)
	this->TEXTURE_CUBE_MAP_POSITIVE_Y = (int)34071;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",527)
	this->TEXTURE_CUBE_MAP_NEGATIVE_Y = (int)34072;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",528)
	this->TEXTURE_CUBE_MAP_POSITIVE_Z = (int)34073;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",529)
	this->TEXTURE_CUBE_MAP_NEGATIVE_Z = (int)34074;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",530)
	this->MAX_CUBE_MAP_TEXTURE_SIZE = (int)34076;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",531)
	this->TEXTURE0 = (int)33984;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",532)
	this->TEXTURE1 = (int)33985;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",533)
	this->TEXTURE2 = (int)33986;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",534)
	this->TEXTURE3 = (int)33987;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",535)
	this->TEXTURE4 = (int)33988;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",536)
	this->TEXTURE5 = (int)33989;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",537)
	this->TEXTURE6 = (int)33990;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",538)
	this->TEXTURE7 = (int)33991;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",539)
	this->TEXTURE8 = (int)33992;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",540)
	this->TEXTURE9 = (int)33993;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",541)
	this->TEXTURE10 = (int)33994;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",542)
	this->TEXTURE11 = (int)33995;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",543)
	this->TEXTURE12 = (int)33996;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",544)
	this->TEXTURE13 = (int)33997;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",545)
	this->TEXTURE14 = (int)33998;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",546)
	this->TEXTURE15 = (int)33999;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",547)
	this->TEXTURE16 = (int)34000;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",548)
	this->TEXTURE17 = (int)34001;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",549)
	this->TEXTURE18 = (int)34002;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",550)
	this->TEXTURE19 = (int)34003;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",551)
	this->TEXTURE20 = (int)34004;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",552)
	this->TEXTURE21 = (int)34005;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",553)
	this->TEXTURE22 = (int)34006;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",554)
	this->TEXTURE23 = (int)34007;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",555)
	this->TEXTURE24 = (int)34008;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",556)
	this->TEXTURE25 = (int)34009;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",557)
	this->TEXTURE26 = (int)34010;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",558)
	this->TEXTURE27 = (int)34011;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",559)
	this->TEXTURE28 = (int)34012;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",560)
	this->TEXTURE29 = (int)34013;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",561)
	this->TEXTURE30 = (int)34014;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",562)
	this->TEXTURE31 = (int)34015;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",563)
	this->ACTIVE_TEXTURE = (int)34016;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",564)
	this->REPEAT = (int)10497;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",565)
	this->CLAMP_TO_EDGE = (int)33071;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",566)
	this->MIRRORED_REPEAT = (int)33648;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",567)
	this->FLOAT_VEC2 = (int)35664;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",568)
	this->FLOAT_VEC3 = (int)35665;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",569)
	this->FLOAT_VEC4 = (int)35666;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",570)
	this->INT_VEC2 = (int)35667;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",571)
	this->INT_VEC3 = (int)35668;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",572)
	this->INT_VEC4 = (int)35669;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",573)
	this->BOOL = (int)35670;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",574)
	this->BOOL_VEC2 = (int)35671;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",575)
	this->BOOL_VEC3 = (int)35672;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",576)
	this->BOOL_VEC4 = (int)35673;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",577)
	this->FLOAT_MAT2 = (int)35674;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",578)
	this->FLOAT_MAT3 = (int)35675;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",579)
	this->FLOAT_MAT4 = (int)35676;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",580)
	this->SAMPLER_2D = (int)35678;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",581)
	this->SAMPLER_CUBE = (int)35680;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",582)
	this->VERTEX_ATTRIB_ARRAY_ENABLED = (int)34338;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",583)
	this->VERTEX_ATTRIB_ARRAY_SIZE = (int)34339;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",584)
	this->VERTEX_ATTRIB_ARRAY_STRIDE = (int)34340;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",585)
	this->VERTEX_ATTRIB_ARRAY_TYPE = (int)34341;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",586)
	this->VERTEX_ATTRIB_ARRAY_NORMALIZED = (int)34922;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",587)
	this->VERTEX_ATTRIB_ARRAY_POINTER = (int)34373;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",588)
	this->VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = (int)34975;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",589)
	this->COMPILE_STATUS = (int)35713;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",590)
	this->LOW_FLOAT = (int)36336;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",591)
	this->MEDIUM_FLOAT = (int)36337;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",592)
	this->HIGH_FLOAT = (int)36338;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",593)
	this->LOW_INT = (int)36339;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",594)
	this->MEDIUM_INT = (int)36340;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",595)
	this->HIGH_INT = (int)36341;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",596)
	this->FRAMEBUFFER = (int)36160;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",597)
	this->RENDERBUFFER = (int)36161;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",598)
	this->RGBA4 = (int)32854;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",599)
	this->RGB5_A1 = (int)32855;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",600)
	this->RGB565 = (int)36194;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",601)
	this->DEPTH_COMPONENT16 = (int)33189;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",602)
	this->STENCIL_INDEX = (int)6401;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",603)
	this->STENCIL_INDEX8 = (int)36168;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",604)
	this->DEPTH_STENCIL = (int)34041;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",605)
	this->RENDERBUFFER_WIDTH = (int)36162;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",606)
	this->RENDERBUFFER_HEIGHT = (int)36163;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",607)
	this->RENDERBUFFER_INTERNAL_FORMAT = (int)36164;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",608)
	this->RENDERBUFFER_RED_SIZE = (int)36176;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",609)
	this->RENDERBUFFER_GREEN_SIZE = (int)36177;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",610)
	this->RENDERBUFFER_BLUE_SIZE = (int)36178;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",611)
	this->RENDERBUFFER_ALPHA_SIZE = (int)36179;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",612)
	this->RENDERBUFFER_DEPTH_SIZE = (int)36180;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",613)
	this->RENDERBUFFER_STENCIL_SIZE = (int)36181;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",614)
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = (int)36048;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",615)
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = (int)36049;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",616)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = (int)36050;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",617)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = (int)36051;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",618)
	this->COLOR_ATTACHMENT0 = (int)36064;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",619)
	this->DEPTH_ATTACHMENT = (int)36096;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",620)
	this->STENCIL_ATTACHMENT = (int)36128;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",621)
	this->DEPTH_STENCIL_ATTACHMENT = (int)33306;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",622)
	this->NONE = (int)0;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",623)
	this->FRAMEBUFFER_COMPLETE = (int)36053;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",624)
	this->FRAMEBUFFER_INCOMPLETE_ATTACHMENT = (int)36054;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",625)
	this->FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = (int)36055;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",626)
	this->FRAMEBUFFER_INCOMPLETE_DIMENSIONS = (int)36057;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",627)
	this->FRAMEBUFFER_UNSUPPORTED = (int)36061;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",628)
	this->FRAMEBUFFER_BINDING = (int)36006;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",629)
	this->RENDERBUFFER_BINDING = (int)36007;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",630)
	this->MAX_RENDERBUFFER_SIZE = (int)34024;
	HX_SOURCE_POS("../../hxgl/core/GL.hx",631)
	this->INVALID_FRAMEBUFFER_OPERATION = (int)1286;
}
;
	return null();
}

GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

Void GL_obj::viewport( int x,int y,int width,int height){
{
		HX_SOURCE_PUSH("GL_obj::viewport")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",633)
		::hxgl::core::GL_obj::_viewport(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

Void GL_obj::clearColor( double red,double green,double blue,double alpha){
{
		HX_SOURCE_PUSH("GL_obj::clearColor")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",634)
		::hxgl::core::GL_obj::_clearColor(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clear( int flags){
{
		HX_SOURCE_PUSH("GL_obj::clear")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",635)
		::hxgl::core::GL_obj::_clear(flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::enable( Dynamic flag){
{
		HX_SOURCE_PUSH("GL_obj::enable")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",636)
		::hxgl::core::GL_obj::_enable(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::disable( Dynamic flag){
{
		HX_SOURCE_PUSH("GL_obj::disable")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",637)
		::hxgl::core::GL_obj::_disable(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::clearDepth( double depth){
{
		HX_SOURCE_PUSH("GL_obj::clearDepth")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",638)
		::hxgl::core::GL_obj::_clearDepth(depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepth,(void))

Dynamic GL_obj::createBuffer( ){
	HX_SOURCE_PUSH("GL_obj::createBuffer")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",639)
	return ::hxgl::core::GL_obj::_createBuffer();
}


HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

Void GL_obj::bindBuffer( Dynamic target,Dynamic buffer){
{
		HX_SOURCE_PUSH("GL_obj::bindBuffer")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",640)
		::hxgl::core::GL_obj::_bindBuffer(target,buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bufferData( Dynamic target,int size,Dynamic type){
{
		HX_SOURCE_PUSH("GL_obj::bufferData")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",641)
		::hxgl::core::GL_obj::_bufferData(target,size,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( Dynamic target,int offset,int size,Dynamic data){
{
		HX_SOURCE_PUSH("GL_obj::bufferSubData")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",642)
		::hxgl::core::GL_obj::_bufferSubData(target,offset,size,data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GL_obj,bufferSubData,(void))

Void GL_obj::drawElements( Dynamic target,int num,Dynamic type,int offset){
{
		HX_SOURCE_PUSH("GL_obj::drawElements")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",643)
		::hxgl::core::GL_obj::_drawElements(target,num,type,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Dynamic GL_obj::createProgram( ){
	HX_SOURCE_PUSH("GL_obj::createProgram")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",644)
	return ::hxgl::core::GL_obj::_createProgram();
}


HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

Dynamic GL_obj::createShader( int type){
	HX_SOURCE_PUSH("GL_obj::createShader")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",645)
	return ::hxgl::core::GL_obj::_createShader(type);
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

Void GL_obj::shaderSource( Dynamic shader,::String code){
{
		HX_SOURCE_PUSH("GL_obj::shaderSource")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",646)
		::hxgl::core::GL_obj::_shaderSource(shader,code);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::compileShader( Dynamic shader){
{
		HX_SOURCE_PUSH("GL_obj::compileShader")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",647)
		::hxgl::core::GL_obj::_compileShader(shader);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Dynamic GL_obj::getShaderParameter( Dynamic shader,Dynamic param){
	HX_SOURCE_PUSH("GL_obj::getShaderParameter")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",648)
	return ::hxgl::core::GL_obj::_getShaderParameter(shader,param);
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Void GL_obj::deleteShader( Dynamic shader){
{
		HX_SOURCE_PUSH("GL_obj::deleteShader")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",649)
		::hxgl::core::GL_obj::_deleteShader(shader);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::attachShader( Dynamic program,Dynamic shader){
{
		HX_SOURCE_PUSH("GL_obj::attachShader")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",650)
		::hxgl::core::GL_obj::_attachShader(program,shader);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::linkProgram( Dynamic program){
{
		HX_SOURCE_PUSH("GL_obj::linkProgram")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",651)
		::hxgl::core::GL_obj::_linkProgram(program);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Dynamic GL_obj::getProgramParameter( Dynamic program,Dynamic param){
	HX_SOURCE_PUSH("GL_obj::getProgramParameter")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",652)
	return ::hxgl::core::GL_obj::_getProgramParameter(program,param);
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

Void GL_obj::deleteProgram( Dynamic program){
{
		HX_SOURCE_PUSH("GL_obj::deleteProgram")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",653)
		::hxgl::core::GL_obj::_deleteProgram(program);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::useProgram( Dynamic program){
{
		HX_SOURCE_PUSH("GL_obj::useProgram")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",654)
		::hxgl::core::GL_obj::_useProgram(program);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Dynamic GL_obj::getAttribLocation( Dynamic program,::String location){
	HX_SOURCE_PUSH("GL_obj::getAttribLocation")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",655)
	return ::hxgl::core::GL_obj::_getAttribLocation(program,location);
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

Void GL_obj::disableVertexAttribArray( Dynamic locindex){
{
		HX_SOURCE_PUSH("GL_obj::disableVertexAttribArray")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",656)
		::hxgl::core::GL_obj::_disableVertexAttribArray(locindex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::enableVertexAttribArray( Dynamic locindex){
{
		HX_SOURCE_PUSH("GL_obj::enableVertexAttribArray")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",657)
		::hxgl::core::GL_obj::_enableVertexAttribArray(locindex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::vertexAttribPointer( Dynamic locindex,int size,Dynamic type,bool normalize,int stride,int bufferOffset){
{
		HX_SOURCE_PUSH("GL_obj::vertexAttribPointer")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",658)
		::hxgl::core::GL_obj::_vertexAttribPointer(locindex,size,type,stride,bufferOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::cullFace( Dynamic flag){
{
		HX_SOURCE_PUSH("GL_obj::cullFace")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",659)
		::hxgl::core::GL_obj::_cullFace(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::depthMask( bool status){
{
		HX_SOURCE_PUSH("GL_obj::depthMask")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",660)
		::hxgl::core::GL_obj::_depthMask(status);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthFunc( Dynamic flag){
{
		HX_SOURCE_PUSH("GL_obj::depthFunc")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",661)
		::hxgl::core::GL_obj::_depthFunc(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Dynamic GL_obj::createTexture( ){
	HX_SOURCE_PUSH("GL_obj::createTexture")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",662)
	return ::hxgl::core::GL_obj::_createTexture();
}


HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

Void GL_obj::bindTexture( Dynamic target,Dynamic texture){
{
		HX_SOURCE_PUSH("GL_obj::bindTexture")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",663)
		::hxgl::core::GL_obj::_bindTexture(target,texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::texParameteri( Dynamic target,Dynamic a,Dynamic b){
{
		HX_SOURCE_PUSH("GL_obj::texParameteri")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",664)
		::hxgl::core::GL_obj::_texParameteri(target,a,b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

int GL_obj::getUniformLocation( Dynamic program,::String location){
	HX_SOURCE_PUSH("GL_obj::getUniformLocation")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",665)
	return ::hxgl::core::GL_obj::_getUniformLocation(program,location);
}


HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

Void GL_obj::uniformMatrix4fv( Dynamic locindex,bool transpose,Array< double > value){
{
		HX_SOURCE_PUSH("GL_obj::uniformMatrix4fv")
		HX_SOURCE_POS("../../hxgl/core/GL.hx",666)
		::hxgl::core::GL_obj::_uniformMatrix4fv(locindex,transpose,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix4fv,(void))

Dynamic GL_obj::_viewport;

Dynamic GL_obj::_clearColor;

Dynamic GL_obj::_clear;

Dynamic GL_obj::_enable;

Dynamic GL_obj::_disable;

Dynamic GL_obj::_clearDepth;

Dynamic GL_obj::_createBuffer;

Dynamic GL_obj::_bindBuffer;

Dynamic GL_obj::_bufferData;

Dynamic GL_obj::_bufferSubData;

Dynamic GL_obj::_drawElements;

Dynamic GL_obj::_createProgram;

Dynamic GL_obj::_createShader;

Dynamic GL_obj::_shaderSource;

Dynamic GL_obj::_compileShader;

Dynamic GL_obj::_getShaderParameter;

Dynamic GL_obj::_deleteShader;

Dynamic GL_obj::_attachShader;

Dynamic GL_obj::_linkProgram;

Dynamic GL_obj::_getProgramParameter;

Dynamic GL_obj::_deleteProgram;

Dynamic GL_obj::_useProgram;

Dynamic GL_obj::_getAttribLocation;

Dynamic GL_obj::_disableVertexAttribArray;

Dynamic GL_obj::_enableVertexAttribArray;

Dynamic GL_obj::_vertexAttribPointer;

Dynamic GL_obj::_cullFace;

Dynamic GL_obj::_depthMask;

Dynamic GL_obj::_depthFunc;

Dynamic GL_obj::_createTexture;

Dynamic GL_obj::_bindTexture;

Dynamic GL_obj::_texParameteri;

Dynamic GL_obj::_getUniformLocation;

Dynamic GL_obj::_uniformMatrix4fv;

Dynamic GL_obj::l( ::String id,int p){
	HX_SOURCE_PUSH("GL_obj::l")
	HX_SOURCE_POS("../../hxgl/core/GL.hx",992)
	return ::cpp::Lib_obj::load(HX_CSTRING("gl"),id,p);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,l,return )


GL_obj::GL_obj()
{
}

void GL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GL);
	HX_MARK_MEMBER_NAME(DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(LINES,"LINES");
	HX_MARK_MEMBER_NAME(LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(ONE,"ONE");
	HX_MARK_MEMBER_NAME(SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(BACK,"BACK");
	HX_MARK_MEMBER_NAME(FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(CW,"CW");
	HX_MARK_MEMBER_NAME(CCW,"CCW");
	HX_MARK_MEMBER_NAME(LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(NUM_COMPRESSED_TEXTURE_FORMATS,"NUM_COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(INT,"INT");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(RGB,"RGB");
	HX_MARK_MEMBER_NAME(RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(LESS,"LESS");
	HX_MARK_MEMBER_NAME(EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(INCR,"INCR");
	HX_MARK_MEMBER_NAME(DECR,"DECR");
	HX_MARK_MEMBER_NAME(INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(NONE,"NONE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_END_CLASS();
}

Dynamic GL_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return l_dyn(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { return CW; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { return ONE; }
		if (HX_FIELD_EQ(inName,"CCW") ) { return CCW; }
		if (HX_FIELD_EQ(inName,"INT") ) { return INT; }
		if (HX_FIELD_EQ(inName,"RGB") ) { return RGB; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { return ZERO; }
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { return BYTE; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA; }
		if (HX_FIELD_EQ(inName,"LESS") ) { return LESS; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { return KEEP; }
		if (HX_FIELD_EQ(inName,"INCR") ) { return INCR; }
		if (HX_FIELD_EQ(inName,"DECR") ) { return DECR; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { return BOOL; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"LINES") ) { return LINES; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { return BLEND; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { return SHORT; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { return NEVER; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { return RGBA4; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_clear") ) { return _clear; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"POINTS") ) { return POINTS; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { return DITHER; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { return NICEST; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { return LEQUAL; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { return GEQUAL; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { return ALWAYS; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { return INVERT; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { return LINEAR; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { return REPEAT; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { return RGB565; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_enable") ) { return _enable; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { return SAMPLES; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { return FASTEST; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { return GREATER; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { return REPLACE; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { return NEAREST; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { return TEXTURE; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { return LOW_INT; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { return RGB5_A1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_disable") ) { return _disable; }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { return FUNC_ADD; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { return VIEWPORT; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { return RED_BITS; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { return NOTEQUAL; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { return TEXTURE0; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { return TEXTURE1; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { return TEXTURE2; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { return TEXTURE3; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { return TEXTURE4; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { return TEXTURE5; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { return TEXTURE6; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { return TEXTURE7; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { return TEXTURE8; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { return TEXTURE9; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { return INT_VEC2; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { return INT_VEC3; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { return INT_VEC4; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { return HIGH_INT; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewport") ) { return _viewport; }
		if (HX_FIELD_EQ(inName,"_cullFace") ) { return _cullFace; }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { return LINE_LOOP; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { return TRIANGLES; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { return SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { return SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { return DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { return DST_COLOR; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { return CULL_FACE; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { return BLUE_BITS; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { return DONT_CARE; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { return LUMINANCE; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { return INCR_WRAP; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { return DECR_WRAP; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { return TEXTURE10; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { return TEXTURE11; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { return TEXTURE12; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { return TEXTURE13; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { return TEXTURE14; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { return TEXTURE15; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { return TEXTURE16; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { return TEXTURE17; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { return TEXTURE18; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { return TEXTURE19; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { return TEXTURE20; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { return TEXTURE21; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { return TEXTURE22; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { return TEXTURE23; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { return TEXTURE24; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { return TEXTURE25; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { return TEXTURE26; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { return TEXTURE27; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { return TEXTURE28; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { return TEXTURE29; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { return TEXTURE30; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { return TEXTURE31; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { return BOOL_VEC2; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { return BOOL_VEC3; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { return BOOL_VEC4; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { return LOW_FLOAT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_depthMask") ) { return _depthMask; }
		if (HX_FIELD_EQ(inName,"_depthFunc") ) { return _depthFunc; }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { return LINE_STRIP; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { return DEPTH_TEST; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { return LINE_WIDTH; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { return FRONT_FACE; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { return DEPTH_FUNC; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { return GREEN_BITS; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { return ALPHA_BITS; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { return DEPTH_BITS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { return TEXTURE_2D; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { return FLOAT_VEC2; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { return FLOAT_VEC3; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { return FLOAT_VEC4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { return FLOAT_MAT2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { return FLOAT_MAT3; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { return FLOAT_MAT4; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { return SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { return HIGH_FLOAT; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { return MEDIUM_INT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_clearColor") ) { return _clearColor; }
		if (HX_FIELD_EQ(inName,"_clearDepth") ) { return _clearDepth; }
		if (HX_FIELD_EQ(inName,"_bindBuffer") ) { return _bindBuffer; }
		if (HX_FIELD_EQ(inName,"_bufferData") ) { return _bufferData; }
		if (HX_FIELD_EQ(inName,"_useProgram") ) { return _useProgram; }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { return BLEND_COLOR; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { return STREAM_DRAW; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { return STATIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { return BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { return DEPTH_RANGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { return STENCIL_REF; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { return SCISSOR_BOX; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { return SHADER_TYPE; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { return LINK_STATUS; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { return FRAMEBUFFER; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_linkProgram") ) { return _linkProgram; }
		if (HX_FIELD_EQ(inName,"_bindTexture") ) { return _bindTexture; }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { return TRIANGLE_FAN; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { return ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { return DYNAMIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { return BUFFER_USAGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { return STENCIL_TEST; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { return SCISSOR_TEST; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { return STENCIL_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { return STENCIL_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { return STENCIL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return UNSIGNED_INT; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { return SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { return MEDIUM_FLOAT; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { return RENDERBUFFER; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_createBuffer") ) { return _createBuffer; }
		if (HX_FIELD_EQ(inName,"_drawElements") ) { return _drawElements; }
		if (HX_FIELD_EQ(inName,"_createShader") ) { return _createShader; }
		if (HX_FIELD_EQ(inName,"_shaderSource") ) { return _shaderSource; }
		if (HX_FIELD_EQ(inName,"_deleteShader") ) { return _deleteShader; }
		if (HX_FIELD_EQ(inName,"_attachShader") ) { return _attachShader; }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { return FUNC_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { return BLEND_DST_RGB; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { return BLEND_SRC_RGB; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { return SUBPIXEL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { return UNSIGNED_BYTE; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { return VERTEX_SHADER; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { return DELETE_STATUS; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { return CLAMP_TO_EDGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { return STENCIL_INDEX; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { return DEPTH_STENCIL; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferSubData") ) { return _bufferSubData; }
		if (HX_FIELD_EQ(inName,"_createProgram") ) { return _createProgram; }
		if (HX_FIELD_EQ(inName,"_compileShader") ) { return _compileShader; }
		if (HX_FIELD_EQ(inName,"_deleteProgram") ) { return _deleteProgram; }
		if (HX_FIELD_EQ(inName,"_createTexture") ) { return _createTexture; }
		if (HX_FIELD_EQ(inName,"_texParameteri") ) { return _texParameteri; }
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { return TRIANGLE_STRIP; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { return BLEND_EQUATION; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { return CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { return CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { return FRONT_AND_BACK; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { return CULL_FACE_MODE; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { return PACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { return SAMPLE_BUFFERS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { return UNSIGNED_SHORT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { return TEXTURE_WRAP_S; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { return TEXTURE_WRAP_T; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { return ACTIVE_TEXTURE; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { return COMPILE_STATUS; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { return STENCIL_INDEX8; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { return BLEND_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { return BLEND_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { return SAMPLE_COVERAGE; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { return DEPTH_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { return COLOR_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { return DEPTH_COMPONENT; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { return LUMINANCE_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { return FRAGMENT_SHADER; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { return VALIDATE_STATUS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { return ACTIVE_UNIFORMS; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { return CURRENT_PROGRAM; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { return MIRRORED_REPEAT; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { return DEPTH_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { return COLOR_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { return STENCIL_BACK_REF; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { return UNPACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { return MAX_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { return ATTACHED_SHADERS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { return TEXTURE_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { return DEPTH_ATTACHMENT; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_uniformMatrix4fv") ) { return _uniformMatrix4fv; }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { return DEPTH_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { return STENCIL_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { return STENCIL_BACK_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { return STENCIL_BACK_FAIL; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { return COLOR_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { return MAX_VIEWPORT_DIMS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { return ACTIVE_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { return DEPTH_COMPONENT16; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { return COLOR_ATTACHMENT0; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_getAttribLocation") ) { return _getAttribLocation; }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { return STENCIL_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { return SRC_ALPHA_SATURATE; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { return BLEND_EQUATION_RGB; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { return STENCIL_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { return TEXTURE_BINDING_2D; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { return MAX_VERTEX_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { return TEXTURE_MAG_FILTER; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { return TEXTURE_MIN_FILTER; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { return RENDERBUFFER_WIDTH; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { return STENCIL_ATTACHMENT; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_getShaderParameter") ) { return _getShaderParameter; }
		if (HX_FIELD_EQ(inName,"_getUniformLocation") ) { return _getUniformLocation; }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { return ONE_MINUS_SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { return ONE_MINUS_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { return ONE_MINUS_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { return ONE_MINUS_DST_COLOR; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { return POLYGON_OFFSET_FILL; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { return STENCIL_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { return MAX_VARYING_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { return RENDERBUFFER_HEIGHT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { return FRAMEBUFFER_BINDING; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_getProgramParameter") ) { return _getProgramParameter; }
		if (HX_FIELD_EQ(inName,"_vertexAttribPointer") ) { return _vertexAttribPointer; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { return BLEND_EQUATION_ALPHA; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { return ELEMENT_ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { return ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { return POLYGON_OFFSET_UNITS; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { return GENERATE_MIPMAP_HINT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { return UNSIGNED_SHORT_5_6_5; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { return LINEAR_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { return FRAMEBUFFER_COMPLETE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { return RENDERBUFFER_BINDING; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { return FUNC_REVERSE_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { return CURRENT_VERTEX_ATTRIB; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { return POLYGON_OFFSET_FACTOR; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { return SAMPLE_COVERAGE_VALUE; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { return LINEAR_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { return NEAREST_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { return RENDERBUFFER_RED_SIZE; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { return MAX_RENDERBUFFER_SIZE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { return STENCIL_BACK_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { return SAMPLE_COVERAGE_INVERT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { return UNSIGNED_SHORT_4_4_4_4; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { return UNSIGNED_SHORT_5_5_5_1; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { return NEAREST_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { return RENDERBUFFER_BLUE_SIZE; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { return STENCIL_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { return STENCIL_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { return STENCIL_BACK_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { return MAX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { return RENDERBUFFER_GREEN_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { return RENDERBUFFER_ALPHA_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { return RENDERBUFFER_DEPTH_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { return FRAMEBUFFER_UNSUPPORTED; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_enableVertexAttribArray") ) { return _enableVertexAttribArray; }
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { return ONE_MINUS_CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { return ONE_MINUS_CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { return SAMPLE_ALPHA_TO_COVERAGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { return ALIASED_POINT_SIZE_RANGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { return ALIASED_LINE_WIDTH_RANGE; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { return SHADING_LANGUAGE_VERSION; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { return TEXTURE_BINDING_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { return VERTEX_ATTRIB_ARRAY_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { return VERTEX_ATTRIB_ARRAY_TYPE; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { return DEPTH_STENCIL_ATTACHMENT; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_disableVertexAttribArray") ) { return _disableVertexAttribArray; }
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { return MAX_CUBE_MAP_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { return RENDERBUFFER_STENCIL_SIZE; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { return COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { return MAX_VERTEX_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { return VERTEX_ATTRIB_ARRAY_STRIDE; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { return TEXTURE_CUBE_MAP_POSITIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { return TEXTURE_CUBE_MAP_NEGATIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { return TEXTURE_CUBE_MAP_POSITIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { return TEXTURE_CUBE_MAP_POSITIVE_Z; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Z; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { return VERTEX_ATTRIB_ARRAY_ENABLED; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { return VERTEX_ATTRIB_ARRAY_POINTER; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { return ELEMENT_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { return STENCIL_BACK_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { return STENCIL_BACK_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { return MAX_FRAGMENT_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { return RENDERBUFFER_INTERNAL_FORMAT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { return INVALID_FRAMEBUFFER_OPERATION; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_COMPRESSED_TEXTURE_FORMATS") ) { return NUM_COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { return MAX_VERTEX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { return VERTEX_ATTRIB_ARRAY_NORMALIZED; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { return MAX_COMBINED_TEXTURE_IMAGE_UNITS; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { return FRAMEBUFFER_INCOMPLETE_DIMENSIONS; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { return VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; }
	}
	return super::__Field(inName);
}

Dynamic GL_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { CW=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { ONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CCW") ) { CCW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT") ) { INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB") ) { RGB=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { ZERO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { RGBA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LESS") ) { LESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { KEEP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR") ) { INCR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR") ) { DECR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { BOOL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { LINES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { BLEND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { NEVER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { RGBA4=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_clear") ) { _clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POINTS") ) { POINTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { DITHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { NICEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { LEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { GEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { ALWAYS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { RGB565=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_enable") ) { _enable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { FASTEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { GREATER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { REPLACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { LOW_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { RGB5_A1=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_disable") ) { _disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { FUNC_ADD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { VIEWPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { RED_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { NOTEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { TEXTURE0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { TEXTURE1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { TEXTURE2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { TEXTURE3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { TEXTURE4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { TEXTURE5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { TEXTURE6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { TEXTURE7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { TEXTURE8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { TEXTURE9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { INT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { INT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { INT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { HIGH_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewport") ) { _viewport=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cullFace") ) { _cullFace=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { LINE_LOOP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { TRIANGLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { CULL_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { BLUE_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { DONT_CARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { LUMINANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { INCR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { DECR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { TEXTURE10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { TEXTURE11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { TEXTURE12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { TEXTURE13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { TEXTURE14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { TEXTURE15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { TEXTURE16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { TEXTURE17=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { TEXTURE18=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { TEXTURE19=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { TEXTURE20=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { TEXTURE21=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { TEXTURE22=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { TEXTURE23=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { TEXTURE24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { TEXTURE25=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { TEXTURE26=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { TEXTURE27=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { TEXTURE28=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { TEXTURE29=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { TEXTURE30=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { TEXTURE31=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { BOOL_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { BOOL_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { BOOL_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { LOW_FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_depthMask") ) { _depthMask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthFunc") ) { _depthFunc=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { LINE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { DEPTH_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { LINE_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { FRONT_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { DEPTH_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { GREEN_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { ALPHA_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { DEPTH_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { TEXTURE_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { FLOAT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { FLOAT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { FLOAT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { FLOAT_MAT2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { FLOAT_MAT3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { FLOAT_MAT4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { HIGH_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { MEDIUM_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_clearColor") ) { _clearColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clearDepth") ) { _clearDepth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bindBuffer") ) { _bindBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferData") ) { _bufferData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_useProgram") ) { _useProgram=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { BLEND_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { STREAM_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { STATIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { DEPTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { STENCIL_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { SCISSOR_BOX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { SHADER_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { LINK_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_linkProgram") ) { _linkProgram=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bindTexture") ) { _bindTexture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { TRIANGLE_FAN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { DYNAMIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { BUFFER_USAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { STENCIL_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { SCISSOR_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { STENCIL_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { STENCIL_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { STENCIL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { MEDIUM_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { RENDERBUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_createBuffer") ) { _createBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawElements") ) { _drawElements=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_createShader") ) { _createShader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shaderSource") ) { _shaderSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deleteShader") ) { _deleteShader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_attachShader") ) { _attachShader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { FUNC_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { BLEND_DST_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { BLEND_SRC_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { SUBPIXEL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { UNSIGNED_BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { VERTEX_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { DELETE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { CLAMP_TO_EDGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { STENCIL_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { DEPTH_STENCIL=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferSubData") ) { _bufferSubData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_createProgram") ) { _createProgram=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_compileShader") ) { _compileShader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deleteProgram") ) { _deleteProgram=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_createTexture") ) { _createTexture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_texParameteri") ) { _texParameteri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { TRIANGLE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { BLEND_EQUATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { FRONT_AND_BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { CULL_FACE_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { PACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { SAMPLE_BUFFERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { UNSIGNED_SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { TEXTURE_WRAP_S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { TEXTURE_WRAP_T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { ACTIVE_TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { COMPILE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { STENCIL_INDEX8=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { BLEND_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { BLEND_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { SAMPLE_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { DEPTH_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { COLOR_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { DEPTH_COMPONENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { LUMINANCE_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { FRAGMENT_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { VALIDATE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { ACTIVE_UNIFORMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { CURRENT_PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { MIRRORED_REPEAT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { DEPTH_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { COLOR_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { STENCIL_BACK_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { UNPACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { MAX_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { ATTACHED_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { TEXTURE_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { DEPTH_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_uniformMatrix4fv") ) { _uniformMatrix4fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { DEPTH_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { STENCIL_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { STENCIL_BACK_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { STENCIL_BACK_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { COLOR_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { MAX_VIEWPORT_DIMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { ACTIVE_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { DEPTH_COMPONENT16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { COLOR_ATTACHMENT0=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_getAttribLocation") ) { _getAttribLocation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { STENCIL_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { SRC_ALPHA_SATURATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { BLEND_EQUATION_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { STENCIL_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { TEXTURE_BINDING_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { MAX_VERTEX_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { TEXTURE_MAG_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { TEXTURE_MIN_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { RENDERBUFFER_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_getShaderParameter") ) { _getShaderParameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_getUniformLocation") ) { _getUniformLocation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { ONE_MINUS_SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { ONE_MINUS_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { ONE_MINUS_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { ONE_MINUS_DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { POLYGON_OFFSET_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { STENCIL_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { MAX_VARYING_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { RENDERBUFFER_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_getProgramParameter") ) { _getProgramParameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexAttribPointer") ) { _vertexAttribPointer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { BLEND_EQUATION_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { ELEMENT_ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { POLYGON_OFFSET_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { GENERATE_MIPMAP_HINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { UNSIGNED_SHORT_5_6_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { LINEAR_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { FRAMEBUFFER_COMPLETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { RENDERBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { FUNC_REVERSE_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { CURRENT_VERTEX_ATTRIB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { POLYGON_OFFSET_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { SAMPLE_COVERAGE_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { LINEAR_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { NEAREST_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { RENDERBUFFER_RED_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { MAX_RENDERBUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { STENCIL_BACK_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { SAMPLE_COVERAGE_INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { UNSIGNED_SHORT_4_4_4_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { UNSIGNED_SHORT_5_5_5_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { NEAREST_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { RENDERBUFFER_BLUE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { STENCIL_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { STENCIL_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { STENCIL_BACK_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { MAX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { RENDERBUFFER_GREEN_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { RENDERBUFFER_ALPHA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { RENDERBUFFER_DEPTH_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { FRAMEBUFFER_UNSUPPORTED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_enableVertexAttribArray") ) { _enableVertexAttribArray=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { ONE_MINUS_CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { ONE_MINUS_CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { SAMPLE_ALPHA_TO_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { ALIASED_POINT_SIZE_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { ALIASED_LINE_WIDTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { SHADING_LANGUAGE_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { TEXTURE_BINDING_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { VERTEX_ATTRIB_ARRAY_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { VERTEX_ATTRIB_ARRAY_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { DEPTH_STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_disableVertexAttribArray") ) { _disableVertexAttribArray=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { MAX_CUBE_MAP_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { RENDERBUFFER_STENCIL_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { MAX_VERTEX_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { VERTEX_ATTRIB_ARRAY_STRIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { TEXTURE_CUBE_MAP_POSITIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { TEXTURE_CUBE_MAP_NEGATIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { TEXTURE_CUBE_MAP_POSITIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { TEXTURE_CUBE_MAP_NEGATIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { TEXTURE_CUBE_MAP_POSITIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { TEXTURE_CUBE_MAP_NEGATIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { VERTEX_ATTRIB_ARRAY_ENABLED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { VERTEX_ATTRIB_ARRAY_POINTER=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { ELEMENT_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { STENCIL_BACK_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { STENCIL_BACK_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { MAX_FRAGMENT_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { RENDERBUFFER_INTERNAL_FORMAT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { INVALID_FRAMEBUFFER_OPERATION=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_COMPRESSED_TEXTURE_FORMATS") ) { NUM_COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { MAX_VERTEX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { VERTEX_ATTRIB_ARRAY_NORMALIZED=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { MAX_COMBINED_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { FRAMEBUFFER_INCOMPLETE_DIMENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void GL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("DEPTH_BUFFER_BIT"));
	outFields->push(HX_CSTRING("STENCIL_BUFFER_BIT"));
	outFields->push(HX_CSTRING("COLOR_BUFFER_BIT"));
	outFields->push(HX_CSTRING("POINTS"));
	outFields->push(HX_CSTRING("LINES"));
	outFields->push(HX_CSTRING("LINE_LOOP"));
	outFields->push(HX_CSTRING("LINE_STRIP"));
	outFields->push(HX_CSTRING("TRIANGLES"));
	outFields->push(HX_CSTRING("TRIANGLE_STRIP"));
	outFields->push(HX_CSTRING("TRIANGLE_FAN"));
	outFields->push(HX_CSTRING("ZERO"));
	outFields->push(HX_CSTRING("ONE"));
	outFields->push(HX_CSTRING("SRC_COLOR"));
	outFields->push(HX_CSTRING("ONE_MINUS_SRC_COLOR"));
	outFields->push(HX_CSTRING("SRC_ALPHA"));
	outFields->push(HX_CSTRING("ONE_MINUS_SRC_ALPHA"));
	outFields->push(HX_CSTRING("DST_ALPHA"));
	outFields->push(HX_CSTRING("ONE_MINUS_DST_ALPHA"));
	outFields->push(HX_CSTRING("DST_COLOR"));
	outFields->push(HX_CSTRING("ONE_MINUS_DST_COLOR"));
	outFields->push(HX_CSTRING("SRC_ALPHA_SATURATE"));
	outFields->push(HX_CSTRING("FUNC_ADD"));
	outFields->push(HX_CSTRING("BLEND_EQUATION"));
	outFields->push(HX_CSTRING("BLEND_EQUATION_RGB"));
	outFields->push(HX_CSTRING("BLEND_EQUATION_ALPHA"));
	outFields->push(HX_CSTRING("FUNC_SUBTRACT"));
	outFields->push(HX_CSTRING("FUNC_REVERSE_SUBTRACT"));
	outFields->push(HX_CSTRING("BLEND_DST_RGB"));
	outFields->push(HX_CSTRING("BLEND_SRC_RGB"));
	outFields->push(HX_CSTRING("BLEND_DST_ALPHA"));
	outFields->push(HX_CSTRING("BLEND_SRC_ALPHA"));
	outFields->push(HX_CSTRING("CONSTANT_COLOR"));
	outFields->push(HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"));
	outFields->push(HX_CSTRING("CONSTANT_ALPHA"));
	outFields->push(HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"));
	outFields->push(HX_CSTRING("BLEND_COLOR"));
	outFields->push(HX_CSTRING("ARRAY_BUFFER"));
	outFields->push(HX_CSTRING("ELEMENT_ARRAY_BUFFER"));
	outFields->push(HX_CSTRING("ARRAY_BUFFER_BINDING"));
	outFields->push(HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"));
	outFields->push(HX_CSTRING("STREAM_DRAW"));
	outFields->push(HX_CSTRING("STATIC_DRAW"));
	outFields->push(HX_CSTRING("DYNAMIC_DRAW"));
	outFields->push(HX_CSTRING("BUFFER_SIZE"));
	outFields->push(HX_CSTRING("BUFFER_USAGE"));
	outFields->push(HX_CSTRING("CURRENT_VERTEX_ATTRIB"));
	outFields->push(HX_CSTRING("FRONT"));
	outFields->push(HX_CSTRING("BACK"));
	outFields->push(HX_CSTRING("FRONT_AND_BACK"));
	outFields->push(HX_CSTRING("CULL_FACE"));
	outFields->push(HX_CSTRING("BLEND"));
	outFields->push(HX_CSTRING("DITHER"));
	outFields->push(HX_CSTRING("STENCIL_TEST"));
	outFields->push(HX_CSTRING("DEPTH_TEST"));
	outFields->push(HX_CSTRING("SCISSOR_TEST"));
	outFields->push(HX_CSTRING("POLYGON_OFFSET_FILL"));
	outFields->push(HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"));
	outFields->push(HX_CSTRING("SAMPLE_COVERAGE"));
	outFields->push(HX_CSTRING("NO_ERROR"));
	outFields->push(HX_CSTRING("INVALID_ENUM"));
	outFields->push(HX_CSTRING("INVALID_VALUE"));
	outFields->push(HX_CSTRING("INVALID_OPERATION"));
	outFields->push(HX_CSTRING("OUT_OF_MEMORY"));
	outFields->push(HX_CSTRING("CW"));
	outFields->push(HX_CSTRING("CCW"));
	outFields->push(HX_CSTRING("LINE_WIDTH"));
	outFields->push(HX_CSTRING("ALIASED_POINT_SIZE_RANGE"));
	outFields->push(HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"));
	outFields->push(HX_CSTRING("CULL_FACE_MODE"));
	outFields->push(HX_CSTRING("FRONT_FACE"));
	outFields->push(HX_CSTRING("DEPTH_RANGE"));
	outFields->push(HX_CSTRING("DEPTH_WRITEMASK"));
	outFields->push(HX_CSTRING("DEPTH_CLEAR_VALUE"));
	outFields->push(HX_CSTRING("DEPTH_FUNC"));
	outFields->push(HX_CSTRING("STENCIL_CLEAR_VALUE"));
	outFields->push(HX_CSTRING("STENCIL_FUNC"));
	outFields->push(HX_CSTRING("STENCIL_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_PASS_DEPTH_PASS"));
	outFields->push(HX_CSTRING("STENCIL_REF"));
	outFields->push(HX_CSTRING("STENCIL_VALUE_MASK"));
	outFields->push(HX_CSTRING("STENCIL_WRITEMASK"));
	outFields->push(HX_CSTRING("STENCIL_BACK_FUNC"));
	outFields->push(HX_CSTRING("STENCIL_BACK_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"));
	outFields->push(HX_CSTRING("STENCIL_BACK_REF"));
	outFields->push(HX_CSTRING("STENCIL_BACK_VALUE_MASK"));
	outFields->push(HX_CSTRING("STENCIL_BACK_WRITEMASK"));
	outFields->push(HX_CSTRING("VIEWPORT"));
	outFields->push(HX_CSTRING("SCISSOR_BOX"));
	outFields->push(HX_CSTRING("COLOR_CLEAR_VALUE"));
	outFields->push(HX_CSTRING("COLOR_WRITEMASK"));
	outFields->push(HX_CSTRING("UNPACK_ALIGNMENT"));
	outFields->push(HX_CSTRING("PACK_ALIGNMENT"));
	outFields->push(HX_CSTRING("MAX_TEXTURE_SIZE"));
	outFields->push(HX_CSTRING("MAX_VIEWPORT_DIMS"));
	outFields->push(HX_CSTRING("SUBPIXEL_BITS"));
	outFields->push(HX_CSTRING("RED_BITS"));
	outFields->push(HX_CSTRING("GREEN_BITS"));
	outFields->push(HX_CSTRING("BLUE_BITS"));
	outFields->push(HX_CSTRING("ALPHA_BITS"));
	outFields->push(HX_CSTRING("DEPTH_BITS"));
	outFields->push(HX_CSTRING("STENCIL_BITS"));
	outFields->push(HX_CSTRING("POLYGON_OFFSET_UNITS"));
	outFields->push(HX_CSTRING("POLYGON_OFFSET_FACTOR"));
	outFields->push(HX_CSTRING("TEXTURE_BINDING_2D"));
	outFields->push(HX_CSTRING("SAMPLE_BUFFERS"));
	outFields->push(HX_CSTRING("SAMPLES"));
	outFields->push(HX_CSTRING("SAMPLE_COVERAGE_VALUE"));
	outFields->push(HX_CSTRING("SAMPLE_COVERAGE_INVERT"));
	outFields->push(HX_CSTRING("NUM_COMPRESSED_TEXTURE_FORMATS"));
	outFields->push(HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"));
	outFields->push(HX_CSTRING("DONT_CARE"));
	outFields->push(HX_CSTRING("FASTEST"));
	outFields->push(HX_CSTRING("NICEST"));
	outFields->push(HX_CSTRING("GENERATE_MIPMAP_HINT"));
	outFields->push(HX_CSTRING("BYTE"));
	outFields->push(HX_CSTRING("UNSIGNED_BYTE"));
	outFields->push(HX_CSTRING("SHORT"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT"));
	outFields->push(HX_CSTRING("INT"));
	outFields->push(HX_CSTRING("UNSIGNED_INT"));
	outFields->push(HX_CSTRING("FLOAT"));
	outFields->push(HX_CSTRING("DEPTH_COMPONENT"));
	outFields->push(HX_CSTRING("ALPHA"));
	outFields->push(HX_CSTRING("RGB"));
	outFields->push(HX_CSTRING("RGBA"));
	outFields->push(HX_CSTRING("LUMINANCE"));
	outFields->push(HX_CSTRING("LUMINANCE_ALPHA"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT_5_6_5"));
	outFields->push(HX_CSTRING("FRAGMENT_SHADER"));
	outFields->push(HX_CSTRING("VERTEX_SHADER"));
	outFields->push(HX_CSTRING("MAX_VERTEX_ATTRIBS"));
	outFields->push(HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"));
	outFields->push(HX_CSTRING("MAX_VARYING_VECTORS"));
	outFields->push(HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"));
	outFields->push(HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"));
	outFields->push(HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"));
	outFields->push(HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"));
	outFields->push(HX_CSTRING("SHADER_TYPE"));
	outFields->push(HX_CSTRING("DELETE_STATUS"));
	outFields->push(HX_CSTRING("LINK_STATUS"));
	outFields->push(HX_CSTRING("VALIDATE_STATUS"));
	outFields->push(HX_CSTRING("ATTACHED_SHADERS"));
	outFields->push(HX_CSTRING("ACTIVE_UNIFORMS"));
	outFields->push(HX_CSTRING("ACTIVE_ATTRIBUTES"));
	outFields->push(HX_CSTRING("SHADING_LANGUAGE_VERSION"));
	outFields->push(HX_CSTRING("CURRENT_PROGRAM"));
	outFields->push(HX_CSTRING("NEVER"));
	outFields->push(HX_CSTRING("LESS"));
	outFields->push(HX_CSTRING("EQUAL"));
	outFields->push(HX_CSTRING("LEQUAL"));
	outFields->push(HX_CSTRING("GREATER"));
	outFields->push(HX_CSTRING("NOTEQUAL"));
	outFields->push(HX_CSTRING("GEQUAL"));
	outFields->push(HX_CSTRING("ALWAYS"));
	outFields->push(HX_CSTRING("KEEP"));
	outFields->push(HX_CSTRING("REPLACE"));
	outFields->push(HX_CSTRING("INCR"));
	outFields->push(HX_CSTRING("DECR"));
	outFields->push(HX_CSTRING("INVERT"));
	outFields->push(HX_CSTRING("INCR_WRAP"));
	outFields->push(HX_CSTRING("DECR_WRAP"));
	outFields->push(HX_CSTRING("VENDOR"));
	outFields->push(HX_CSTRING("RENDERER"));
	outFields->push(HX_CSTRING("VERSION"));
	outFields->push(HX_CSTRING("NEAREST"));
	outFields->push(HX_CSTRING("LINEAR"));
	outFields->push(HX_CSTRING("NEAREST_MIPMAP_NEAREST"));
	outFields->push(HX_CSTRING("LINEAR_MIPMAP_NEAREST"));
	outFields->push(HX_CSTRING("NEAREST_MIPMAP_LINEAR"));
	outFields->push(HX_CSTRING("LINEAR_MIPMAP_LINEAR"));
	outFields->push(HX_CSTRING("TEXTURE_MAG_FILTER"));
	outFields->push(HX_CSTRING("TEXTURE_MIN_FILTER"));
	outFields->push(HX_CSTRING("TEXTURE_WRAP_S"));
	outFields->push(HX_CSTRING("TEXTURE_WRAP_T"));
	outFields->push(HX_CSTRING("TEXTURE_2D"));
	outFields->push(HX_CSTRING("TEXTURE"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP"));
	outFields->push(HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"));
	outFields->push(HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"));
	outFields->push(HX_CSTRING("TEXTURE0"));
	outFields->push(HX_CSTRING("TEXTURE1"));
	outFields->push(HX_CSTRING("TEXTURE2"));
	outFields->push(HX_CSTRING("TEXTURE3"));
	outFields->push(HX_CSTRING("TEXTURE4"));
	outFields->push(HX_CSTRING("TEXTURE5"));
	outFields->push(HX_CSTRING("TEXTURE6"));
	outFields->push(HX_CSTRING("TEXTURE7"));
	outFields->push(HX_CSTRING("TEXTURE8"));
	outFields->push(HX_CSTRING("TEXTURE9"));
	outFields->push(HX_CSTRING("TEXTURE10"));
	outFields->push(HX_CSTRING("TEXTURE11"));
	outFields->push(HX_CSTRING("TEXTURE12"));
	outFields->push(HX_CSTRING("TEXTURE13"));
	outFields->push(HX_CSTRING("TEXTURE14"));
	outFields->push(HX_CSTRING("TEXTURE15"));
	outFields->push(HX_CSTRING("TEXTURE16"));
	outFields->push(HX_CSTRING("TEXTURE17"));
	outFields->push(HX_CSTRING("TEXTURE18"));
	outFields->push(HX_CSTRING("TEXTURE19"));
	outFields->push(HX_CSTRING("TEXTURE20"));
	outFields->push(HX_CSTRING("TEXTURE21"));
	outFields->push(HX_CSTRING("TEXTURE22"));
	outFields->push(HX_CSTRING("TEXTURE23"));
	outFields->push(HX_CSTRING("TEXTURE24"));
	outFields->push(HX_CSTRING("TEXTURE25"));
	outFields->push(HX_CSTRING("TEXTURE26"));
	outFields->push(HX_CSTRING("TEXTURE27"));
	outFields->push(HX_CSTRING("TEXTURE28"));
	outFields->push(HX_CSTRING("TEXTURE29"));
	outFields->push(HX_CSTRING("TEXTURE30"));
	outFields->push(HX_CSTRING("TEXTURE31"));
	outFields->push(HX_CSTRING("ACTIVE_TEXTURE"));
	outFields->push(HX_CSTRING("REPEAT"));
	outFields->push(HX_CSTRING("CLAMP_TO_EDGE"));
	outFields->push(HX_CSTRING("MIRRORED_REPEAT"));
	outFields->push(HX_CSTRING("FLOAT_VEC2"));
	outFields->push(HX_CSTRING("FLOAT_VEC3"));
	outFields->push(HX_CSTRING("FLOAT_VEC4"));
	outFields->push(HX_CSTRING("INT_VEC2"));
	outFields->push(HX_CSTRING("INT_VEC3"));
	outFields->push(HX_CSTRING("INT_VEC4"));
	outFields->push(HX_CSTRING("BOOL"));
	outFields->push(HX_CSTRING("BOOL_VEC2"));
	outFields->push(HX_CSTRING("BOOL_VEC3"));
	outFields->push(HX_CSTRING("BOOL_VEC4"));
	outFields->push(HX_CSTRING("FLOAT_MAT2"));
	outFields->push(HX_CSTRING("FLOAT_MAT3"));
	outFields->push(HX_CSTRING("FLOAT_MAT4"));
	outFields->push(HX_CSTRING("SAMPLER_2D"));
	outFields->push(HX_CSTRING("SAMPLER_CUBE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"));
	outFields->push(HX_CSTRING("COMPILE_STATUS"));
	outFields->push(HX_CSTRING("LOW_FLOAT"));
	outFields->push(HX_CSTRING("MEDIUM_FLOAT"));
	outFields->push(HX_CSTRING("HIGH_FLOAT"));
	outFields->push(HX_CSTRING("LOW_INT"));
	outFields->push(HX_CSTRING("MEDIUM_INT"));
	outFields->push(HX_CSTRING("HIGH_INT"));
	outFields->push(HX_CSTRING("FRAMEBUFFER"));
	outFields->push(HX_CSTRING("RENDERBUFFER"));
	outFields->push(HX_CSTRING("RGBA4"));
	outFields->push(HX_CSTRING("RGB5_A1"));
	outFields->push(HX_CSTRING("RGB565"));
	outFields->push(HX_CSTRING("DEPTH_COMPONENT16"));
	outFields->push(HX_CSTRING("STENCIL_INDEX"));
	outFields->push(HX_CSTRING("STENCIL_INDEX8"));
	outFields->push(HX_CSTRING("DEPTH_STENCIL"));
	outFields->push(HX_CSTRING("RENDERBUFFER_WIDTH"));
	outFields->push(HX_CSTRING("RENDERBUFFER_HEIGHT"));
	outFields->push(HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"));
	outFields->push(HX_CSTRING("RENDERBUFFER_RED_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_GREEN_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_BLUE_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"));
	outFields->push(HX_CSTRING("COLOR_ATTACHMENT0"));
	outFields->push(HX_CSTRING("DEPTH_ATTACHMENT"));
	outFields->push(HX_CSTRING("STENCIL_ATTACHMENT"));
	outFields->push(HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"));
	outFields->push(HX_CSTRING("NONE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_COMPLETE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_BINDING"));
	outFields->push(HX_CSTRING("RENDERBUFFER_BINDING"));
	outFields->push(HX_CSTRING("MAX_RENDERBUFFER_SIZE"));
	outFields->push(HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_viewport"),
	HX_CSTRING("_clearColor"),
	HX_CSTRING("_clear"),
	HX_CSTRING("_enable"),
	HX_CSTRING("_disable"),
	HX_CSTRING("_clearDepth"),
	HX_CSTRING("_createBuffer"),
	HX_CSTRING("_bindBuffer"),
	HX_CSTRING("_bufferData"),
	HX_CSTRING("_bufferSubData"),
	HX_CSTRING("_drawElements"),
	HX_CSTRING("_createProgram"),
	HX_CSTRING("_createShader"),
	HX_CSTRING("_shaderSource"),
	HX_CSTRING("_compileShader"),
	HX_CSTRING("_getShaderParameter"),
	HX_CSTRING("_deleteShader"),
	HX_CSTRING("_attachShader"),
	HX_CSTRING("_linkProgram"),
	HX_CSTRING("_getProgramParameter"),
	HX_CSTRING("_deleteProgram"),
	HX_CSTRING("_useProgram"),
	HX_CSTRING("_getAttribLocation"),
	HX_CSTRING("_disableVertexAttribArray"),
	HX_CSTRING("_enableVertexAttribArray"),
	HX_CSTRING("_vertexAttribPointer"),
	HX_CSTRING("_cullFace"),
	HX_CSTRING("_depthMask"),
	HX_CSTRING("_depthFunc"),
	HX_CSTRING("_createTexture"),
	HX_CSTRING("_bindTexture"),
	HX_CSTRING("_texParameteri"),
	HX_CSTRING("_getUniformLocation"),
	HX_CSTRING("_uniformMatrix4fv"),
	HX_CSTRING("l"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("viewport"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clear"),
	HX_CSTRING("enable"),
	HX_CSTRING("disable"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferSubData"),
	HX_CSTRING("drawElements"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createShader"),
	HX_CSTRING("shaderSource"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("getShaderParameter"),
	HX_CSTRING("deleteShader"),
	HX_CSTRING("attachShader"),
	HX_CSTRING("linkProgram"),
	HX_CSTRING("getProgramParameter"),
	HX_CSTRING("deleteProgram"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("disableVertexAttribArray"),
	HX_CSTRING("enableVertexAttribArray"),
	HX_CSTRING("vertexAttribPointer"),
	HX_CSTRING("cullFace"),
	HX_CSTRING("depthMask"),
	HX_CSTRING("depthFunc"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("texParameteri"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("uniformMatrix4fv"),
	HX_CSTRING("DEPTH_BUFFER_BIT"),
	HX_CSTRING("STENCIL_BUFFER_BIT"),
	HX_CSTRING("COLOR_BUFFER_BIT"),
	HX_CSTRING("POINTS"),
	HX_CSTRING("LINES"),
	HX_CSTRING("LINE_LOOP"),
	HX_CSTRING("LINE_STRIP"),
	HX_CSTRING("TRIANGLES"),
	HX_CSTRING("TRIANGLE_STRIP"),
	HX_CSTRING("TRIANGLE_FAN"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("SRC_COLOR"),
	HX_CSTRING("ONE_MINUS_SRC_COLOR"),
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("DST_ALPHA"),
	HX_CSTRING("ONE_MINUS_DST_ALPHA"),
	HX_CSTRING("DST_COLOR"),
	HX_CSTRING("ONE_MINUS_DST_COLOR"),
	HX_CSTRING("SRC_ALPHA_SATURATE"),
	HX_CSTRING("FUNC_ADD"),
	HX_CSTRING("BLEND_EQUATION"),
	HX_CSTRING("BLEND_EQUATION_RGB"),
	HX_CSTRING("BLEND_EQUATION_ALPHA"),
	HX_CSTRING("FUNC_SUBTRACT"),
	HX_CSTRING("FUNC_REVERSE_SUBTRACT"),
	HX_CSTRING("BLEND_DST_RGB"),
	HX_CSTRING("BLEND_SRC_RGB"),
	HX_CSTRING("BLEND_DST_ALPHA"),
	HX_CSTRING("BLEND_SRC_ALPHA"),
	HX_CSTRING("CONSTANT_COLOR"),
	HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"),
	HX_CSTRING("CONSTANT_ALPHA"),
	HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"),
	HX_CSTRING("BLEND_COLOR"),
	HX_CSTRING("ARRAY_BUFFER"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER"),
	HX_CSTRING("ARRAY_BUFFER_BINDING"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("STREAM_DRAW"),
	HX_CSTRING("STATIC_DRAW"),
	HX_CSTRING("DYNAMIC_DRAW"),
	HX_CSTRING("BUFFER_SIZE"),
	HX_CSTRING("BUFFER_USAGE"),
	HX_CSTRING("CURRENT_VERTEX_ATTRIB"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("CULL_FACE"),
	HX_CSTRING("BLEND"),
	HX_CSTRING("DITHER"),
	HX_CSTRING("STENCIL_TEST"),
	HX_CSTRING("DEPTH_TEST"),
	HX_CSTRING("SCISSOR_TEST"),
	HX_CSTRING("POLYGON_OFFSET_FILL"),
	HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"),
	HX_CSTRING("SAMPLE_COVERAGE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("CW"),
	HX_CSTRING("CCW"),
	HX_CSTRING("LINE_WIDTH"),
	HX_CSTRING("ALIASED_POINT_SIZE_RANGE"),
	HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"),
	HX_CSTRING("CULL_FACE_MODE"),
	HX_CSTRING("FRONT_FACE"),
	HX_CSTRING("DEPTH_RANGE"),
	HX_CSTRING("DEPTH_WRITEMASK"),
	HX_CSTRING("DEPTH_CLEAR_VALUE"),
	HX_CSTRING("DEPTH_FUNC"),
	HX_CSTRING("STENCIL_CLEAR_VALUE"),
	HX_CSTRING("STENCIL_FUNC"),
	HX_CSTRING("STENCIL_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_REF"),
	HX_CSTRING("STENCIL_VALUE_MASK"),
	HX_CSTRING("STENCIL_WRITEMASK"),
	HX_CSTRING("STENCIL_BACK_FUNC"),
	HX_CSTRING("STENCIL_BACK_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_BACK_REF"),
	HX_CSTRING("STENCIL_BACK_VALUE_MASK"),
	HX_CSTRING("STENCIL_BACK_WRITEMASK"),
	HX_CSTRING("VIEWPORT"),
	HX_CSTRING("SCISSOR_BOX"),
	HX_CSTRING("COLOR_CLEAR_VALUE"),
	HX_CSTRING("COLOR_WRITEMASK"),
	HX_CSTRING("UNPACK_ALIGNMENT"),
	HX_CSTRING("PACK_ALIGNMENT"),
	HX_CSTRING("MAX_TEXTURE_SIZE"),
	HX_CSTRING("MAX_VIEWPORT_DIMS"),
	HX_CSTRING("SUBPIXEL_BITS"),
	HX_CSTRING("RED_BITS"),
	HX_CSTRING("GREEN_BITS"),
	HX_CSTRING("BLUE_BITS"),
	HX_CSTRING("ALPHA_BITS"),
	HX_CSTRING("DEPTH_BITS"),
	HX_CSTRING("STENCIL_BITS"),
	HX_CSTRING("POLYGON_OFFSET_UNITS"),
	HX_CSTRING("POLYGON_OFFSET_FACTOR"),
	HX_CSTRING("TEXTURE_BINDING_2D"),
	HX_CSTRING("SAMPLE_BUFFERS"),
	HX_CSTRING("SAMPLES"),
	HX_CSTRING("SAMPLE_COVERAGE_VALUE"),
	HX_CSTRING("SAMPLE_COVERAGE_INVERT"),
	HX_CSTRING("NUM_COMPRESSED_TEXTURE_FORMATS"),
	HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"),
	HX_CSTRING("DONT_CARE"),
	HX_CSTRING("FASTEST"),
	HX_CSTRING("NICEST"),
	HX_CSTRING("GENERATE_MIPMAP_HINT"),
	HX_CSTRING("BYTE"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("SHORT"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("INT"),
	HX_CSTRING("UNSIGNED_INT"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("DEPTH_COMPONENT"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("RGB"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("LUMINANCE"),
	HX_CSTRING("LUMINANCE_ALPHA"),
	HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"),
	HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"),
	HX_CSTRING("UNSIGNED_SHORT_5_6_5"),
	HX_CSTRING("FRAGMENT_SHADER"),
	HX_CSTRING("VERTEX_SHADER"),
	HX_CSTRING("MAX_VERTEX_ATTRIBS"),
	HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"),
	HX_CSTRING("MAX_VARYING_VECTORS"),
	HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"),
	HX_CSTRING("SHADER_TYPE"),
	HX_CSTRING("DELETE_STATUS"),
	HX_CSTRING("LINK_STATUS"),
	HX_CSTRING("VALIDATE_STATUS"),
	HX_CSTRING("ATTACHED_SHADERS"),
	HX_CSTRING("ACTIVE_UNIFORMS"),
	HX_CSTRING("ACTIVE_ATTRIBUTES"),
	HX_CSTRING("SHADING_LANGUAGE_VERSION"),
	HX_CSTRING("CURRENT_PROGRAM"),
	HX_CSTRING("NEVER"),
	HX_CSTRING("LESS"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("LEQUAL"),
	HX_CSTRING("GREATER"),
	HX_CSTRING("NOTEQUAL"),
	HX_CSTRING("GEQUAL"),
	HX_CSTRING("ALWAYS"),
	HX_CSTRING("KEEP"),
	HX_CSTRING("REPLACE"),
	HX_CSTRING("INCR"),
	HX_CSTRING("DECR"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("INCR_WRAP"),
	HX_CSTRING("DECR_WRAP"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST_MIPMAP_NEAREST"),
	HX_CSTRING("LINEAR_MIPMAP_NEAREST"),
	HX_CSTRING("NEAREST_MIPMAP_LINEAR"),
	HX_CSTRING("LINEAR_MIPMAP_LINEAR"),
	HX_CSTRING("TEXTURE_MAG_FILTER"),
	HX_CSTRING("TEXTURE_MIN_FILTER"),
	HX_CSTRING("TEXTURE_WRAP_S"),
	HX_CSTRING("TEXTURE_WRAP_T"),
	HX_CSTRING("TEXTURE_2D"),
	HX_CSTRING("TEXTURE"),
	HX_CSTRING("TEXTURE_CUBE_MAP"),
	HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"),
	HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"),
	HX_CSTRING("TEXTURE0"),
	HX_CSTRING("TEXTURE1"),
	HX_CSTRING("TEXTURE2"),
	HX_CSTRING("TEXTURE3"),
	HX_CSTRING("TEXTURE4"),
	HX_CSTRING("TEXTURE5"),
	HX_CSTRING("TEXTURE6"),
	HX_CSTRING("TEXTURE7"),
	HX_CSTRING("TEXTURE8"),
	HX_CSTRING("TEXTURE9"),
	HX_CSTRING("TEXTURE10"),
	HX_CSTRING("TEXTURE11"),
	HX_CSTRING("TEXTURE12"),
	HX_CSTRING("TEXTURE13"),
	HX_CSTRING("TEXTURE14"),
	HX_CSTRING("TEXTURE15"),
	HX_CSTRING("TEXTURE16"),
	HX_CSTRING("TEXTURE17"),
	HX_CSTRING("TEXTURE18"),
	HX_CSTRING("TEXTURE19"),
	HX_CSTRING("TEXTURE20"),
	HX_CSTRING("TEXTURE21"),
	HX_CSTRING("TEXTURE22"),
	HX_CSTRING("TEXTURE23"),
	HX_CSTRING("TEXTURE24"),
	HX_CSTRING("TEXTURE25"),
	HX_CSTRING("TEXTURE26"),
	HX_CSTRING("TEXTURE27"),
	HX_CSTRING("TEXTURE28"),
	HX_CSTRING("TEXTURE29"),
	HX_CSTRING("TEXTURE30"),
	HX_CSTRING("TEXTURE31"),
	HX_CSTRING("ACTIVE_TEXTURE"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("CLAMP_TO_EDGE"),
	HX_CSTRING("MIRRORED_REPEAT"),
	HX_CSTRING("FLOAT_VEC2"),
	HX_CSTRING("FLOAT_VEC3"),
	HX_CSTRING("FLOAT_VEC4"),
	HX_CSTRING("INT_VEC2"),
	HX_CSTRING("INT_VEC3"),
	HX_CSTRING("INT_VEC4"),
	HX_CSTRING("BOOL"),
	HX_CSTRING("BOOL_VEC2"),
	HX_CSTRING("BOOL_VEC3"),
	HX_CSTRING("BOOL_VEC4"),
	HX_CSTRING("FLOAT_MAT2"),
	HX_CSTRING("FLOAT_MAT3"),
	HX_CSTRING("FLOAT_MAT4"),
	HX_CSTRING("SAMPLER_2D"),
	HX_CSTRING("SAMPLER_CUBE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("COMPILE_STATUS"),
	HX_CSTRING("LOW_FLOAT"),
	HX_CSTRING("MEDIUM_FLOAT"),
	HX_CSTRING("HIGH_FLOAT"),
	HX_CSTRING("LOW_INT"),
	HX_CSTRING("MEDIUM_INT"),
	HX_CSTRING("HIGH_INT"),
	HX_CSTRING("FRAMEBUFFER"),
	HX_CSTRING("RENDERBUFFER"),
	HX_CSTRING("RGBA4"),
	HX_CSTRING("RGB5_A1"),
	HX_CSTRING("RGB565"),
	HX_CSTRING("DEPTH_COMPONENT16"),
	HX_CSTRING("STENCIL_INDEX"),
	HX_CSTRING("STENCIL_INDEX8"),
	HX_CSTRING("DEPTH_STENCIL"),
	HX_CSTRING("RENDERBUFFER_WIDTH"),
	HX_CSTRING("RENDERBUFFER_HEIGHT"),
	HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"),
	HX_CSTRING("RENDERBUFFER_RED_SIZE"),
	HX_CSTRING("RENDERBUFFER_GREEN_SIZE"),
	HX_CSTRING("RENDERBUFFER_BLUE_SIZE"),
	HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"),
	HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"),
	HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"),
	HX_CSTRING("COLOR_ATTACHMENT0"),
	HX_CSTRING("DEPTH_ATTACHMENT"),
	HX_CSTRING("STENCIL_ATTACHMENT"),
	HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("FRAMEBUFFER_COMPLETE"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"),
	HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"),
	HX_CSTRING("FRAMEBUFFER_BINDING"),
	HX_CSTRING("RENDERBUFFER_BINDING"),
	HX_CSTRING("MAX_RENDERBUFFER_SIZE"),
	HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::_viewport,"_viewport");
	HX_MARK_MEMBER_NAME(GL_obj::_clearColor,"_clearColor");
	HX_MARK_MEMBER_NAME(GL_obj::_clear,"_clear");
	HX_MARK_MEMBER_NAME(GL_obj::_enable,"_enable");
	HX_MARK_MEMBER_NAME(GL_obj::_disable,"_disable");
	HX_MARK_MEMBER_NAME(GL_obj::_clearDepth,"_clearDepth");
	HX_MARK_MEMBER_NAME(GL_obj::_createBuffer,"_createBuffer");
	HX_MARK_MEMBER_NAME(GL_obj::_bindBuffer,"_bindBuffer");
	HX_MARK_MEMBER_NAME(GL_obj::_bufferData,"_bufferData");
	HX_MARK_MEMBER_NAME(GL_obj::_bufferSubData,"_bufferSubData");
	HX_MARK_MEMBER_NAME(GL_obj::_drawElements,"_drawElements");
	HX_MARK_MEMBER_NAME(GL_obj::_createProgram,"_createProgram");
	HX_MARK_MEMBER_NAME(GL_obj::_createShader,"_createShader");
	HX_MARK_MEMBER_NAME(GL_obj::_shaderSource,"_shaderSource");
	HX_MARK_MEMBER_NAME(GL_obj::_compileShader,"_compileShader");
	HX_MARK_MEMBER_NAME(GL_obj::_getShaderParameter,"_getShaderParameter");
	HX_MARK_MEMBER_NAME(GL_obj::_deleteShader,"_deleteShader");
	HX_MARK_MEMBER_NAME(GL_obj::_attachShader,"_attachShader");
	HX_MARK_MEMBER_NAME(GL_obj::_linkProgram,"_linkProgram");
	HX_MARK_MEMBER_NAME(GL_obj::_getProgramParameter,"_getProgramParameter");
	HX_MARK_MEMBER_NAME(GL_obj::_deleteProgram,"_deleteProgram");
	HX_MARK_MEMBER_NAME(GL_obj::_useProgram,"_useProgram");
	HX_MARK_MEMBER_NAME(GL_obj::_getAttribLocation,"_getAttribLocation");
	HX_MARK_MEMBER_NAME(GL_obj::_disableVertexAttribArray,"_disableVertexAttribArray");
	HX_MARK_MEMBER_NAME(GL_obj::_enableVertexAttribArray,"_enableVertexAttribArray");
	HX_MARK_MEMBER_NAME(GL_obj::_vertexAttribPointer,"_vertexAttribPointer");
	HX_MARK_MEMBER_NAME(GL_obj::_cullFace,"_cullFace");
	HX_MARK_MEMBER_NAME(GL_obj::_depthMask,"_depthMask");
	HX_MARK_MEMBER_NAME(GL_obj::_depthFunc,"_depthFunc");
	HX_MARK_MEMBER_NAME(GL_obj::_createTexture,"_createTexture");
	HX_MARK_MEMBER_NAME(GL_obj::_bindTexture,"_bindTexture");
	HX_MARK_MEMBER_NAME(GL_obj::_texParameteri,"_texParameteri");
	HX_MARK_MEMBER_NAME(GL_obj::_getUniformLocation,"_getUniformLocation");
	HX_MARK_MEMBER_NAME(GL_obj::_uniformMatrix4fv,"_uniformMatrix4fv");
};

Class GL_obj::__mClass;

void GL_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.core.GL"), hx::TCanCast< GL_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void GL_obj::__boot()
{
	hx::Static(_viewport) = ::hxgl::core::GL_obj::l(HX_CSTRING("viewport"),(int)4);
	hx::Static(_clearColor) = ::hxgl::core::GL_obj::l(HX_CSTRING("clearColor"),(int)4);
	hx::Static(_clear) = ::hxgl::core::GL_obj::l(HX_CSTRING("clear"),(int)1);
	hx::Static(_enable) = ::hxgl::core::GL_obj::l(HX_CSTRING("enable"),(int)1);
	hx::Static(_disable) = ::hxgl::core::GL_obj::l(HX_CSTRING("disable"),(int)1);
	hx::Static(_clearDepth) = ::hxgl::core::GL_obj::l(HX_CSTRING("clearDepth"),(int)1);
	hx::Static(_createBuffer) = ::hxgl::core::GL_obj::l(HX_CSTRING("createBuffer"),(int)0);
	hx::Static(_bindBuffer) = ::hxgl::core::GL_obj::l(HX_CSTRING("bindBuffer"),(int)2);
	hx::Static(_bufferData) = ::hxgl::core::GL_obj::l(HX_CSTRING("bufferData"),(int)3);
	hx::Static(_bufferSubData) = ::hxgl::core::GL_obj::l(HX_CSTRING("bufferSubData"),(int)4);
	hx::Static(_drawElements) = ::hxgl::core::GL_obj::l(HX_CSTRING("drawElements"),(int)4);
	hx::Static(_createProgram) = ::hxgl::core::GL_obj::l(HX_CSTRING("createProgram"),(int)0);
	hx::Static(_createShader) = ::hxgl::core::GL_obj::l(HX_CSTRING("createShader"),(int)1);
	hx::Static(_shaderSource) = ::hxgl::core::GL_obj::l(HX_CSTRING("shaderSource"),(int)2);
	hx::Static(_compileShader) = ::hxgl::core::GL_obj::l(HX_CSTRING("compileShader"),(int)1);
	hx::Static(_getShaderParameter) = ::hxgl::core::GL_obj::l(HX_CSTRING("getShaderParameter"),(int)2);
	hx::Static(_deleteShader) = ::hxgl::core::GL_obj::l(HX_CSTRING("deleteShader"),(int)1);
	hx::Static(_attachShader) = ::hxgl::core::GL_obj::l(HX_CSTRING("attachShader"),(int)2);
	hx::Static(_linkProgram) = ::hxgl::core::GL_obj::l(HX_CSTRING("linkProgram"),(int)1);
	hx::Static(_getProgramParameter) = ::hxgl::core::GL_obj::l(HX_CSTRING("getProgramParameter"),(int)2);
	hx::Static(_deleteProgram) = ::hxgl::core::GL_obj::l(HX_CSTRING("deleteProgram"),(int)1);
	hx::Static(_useProgram) = ::hxgl::core::GL_obj::l(HX_CSTRING("useProgram"),(int)1);
	hx::Static(_getAttribLocation) = ::hxgl::core::GL_obj::l(HX_CSTRING("getAttribLocation"),(int)2);
	hx::Static(_disableVertexAttribArray) = ::hxgl::core::GL_obj::l(HX_CSTRING("disableVertexAttribArray"),(int)1);
	hx::Static(_enableVertexAttribArray) = ::hxgl::core::GL_obj::l(HX_CSTRING("enableVertexAttribArray"),(int)1);
	hx::Static(_vertexAttribPointer) = ::hxgl::core::GL_obj::l(HX_CSTRING("vertexAttribPointer"),(int)5);
	hx::Static(_cullFace) = ::hxgl::core::GL_obj::l(HX_CSTRING("cullFace"),(int)1);
	hx::Static(_depthMask) = ::hxgl::core::GL_obj::l(HX_CSTRING("depthMask"),(int)1);
	hx::Static(_depthFunc) = ::hxgl::core::GL_obj::l(HX_CSTRING("depthFunc"),(int)1);
	hx::Static(_createTexture) = ::hxgl::core::GL_obj::l(HX_CSTRING("createTexture"),(int)0);
	hx::Static(_bindTexture) = ::hxgl::core::GL_obj::l(HX_CSTRING("bindTexture"),(int)2);
	hx::Static(_texParameteri) = ::hxgl::core::GL_obj::l(HX_CSTRING("texParameteri"),(int)3);
	hx::Static(_getUniformLocation) = ::hxgl::core::GL_obj::l(HX_CSTRING("getUniformLocation"),(int)2);
	hx::Static(_uniformMatrix4fv) = ::hxgl::core::GL_obj::l(HX_CSTRING("uniformMatrix4fv"),(int)3);
}

} // end namespace hxgl
} // end namespace core
