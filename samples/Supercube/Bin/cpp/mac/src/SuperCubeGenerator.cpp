#include <hxcpp.h>

#ifndef INCLUDED_SuperCubeGenerator
#include <SuperCubeGenerator.h>
#endif

Void SuperCubeGenerator_obj::__construct()
{
	return null();
}

SuperCubeGenerator_obj::~SuperCubeGenerator_obj() { }

Dynamic SuperCubeGenerator_obj::__CreateEmpty() { return  new SuperCubeGenerator_obj; }
hx::ObjectPtr< SuperCubeGenerator_obj > SuperCubeGenerator_obj::__new()
{  hx::ObjectPtr< SuperCubeGenerator_obj > result = new SuperCubeGenerator_obj();
	result->__construct();
	return result;}

Dynamic SuperCubeGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SuperCubeGenerator_obj > result = new SuperCubeGenerator_obj();
	result->__construct();
	return result;}

Array< double > SuperCubeGenerator_obj::v;

Array< int > SuperCubeGenerator_obj::i;

int SuperCubeGenerator_obj::i_accum;

Dynamic SuperCubeGenerator_obj::subDivideCube3D( double x,double y,double z,double size,int ncubes){
	HX_SOURCE_PUSH("SuperCubeGenerator_obj::subDivideCube3D")
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",17)
	::SuperCubeGenerator_obj::i_accum = (int)0;
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",18)
	::SuperCubeGenerator_obj::v = Array_obj< double >::__new();
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",22)
	::SuperCubeGenerator_obj::i = Array_obj< int >::__new();
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",25)
	int ntotalcubes = ((ncubes * (int)2) - (int)1);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",26)
	double hsize = (size * .5);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",28)
	double cubewidth = (double(size) / double(ntotalcubes));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",29)
	double hcubewidth = (cubewidth * .5);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",30)
	double dcubewidth = (cubewidth * (int)2);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",32)
	double startx = ((x - hsize) + hcubewidth);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",33)
	double starty = ((y - hsize) + hcubewidth);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",34)
	double startz = ((z - hsize) + hcubewidth);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",36)
	double endx = (x + hsize);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",37)
	double endy = (y + hsize);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",38)
	double endz = (z + hsize);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",40)
	double ix;
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",41)
	double iy;
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",42)
	double iz;
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",44)
	int ind = (int)0;
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",46)
	iz = startz;
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",47)
	while(((iz < endz))){
		HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",49)
		iy = starty;
		HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",50)
		while(((iy < endy))){
			HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",52)
			ix = startx;
			HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",53)
			while(((ix < endx))){
				HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",55)
				::SuperCubeGenerator_obj::drawICube(ix,iy,iz,cubewidth,::SuperCubeGenerator_obj::v,::SuperCubeGenerator_obj::i);
				HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",56)
				hx::AddEq(::SuperCubeGenerator_obj::i_accum,(int)8);
				HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",57)
				hx::AddEq(ix,dcubewidth);
			}
			HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",59)
			hx::AddEq(iy,dcubewidth);
		}
		HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",61)
		hx::AddEq(iz,dcubewidth);
	}
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",64)
	::SuperCubeGenerator_obj::i_accum = (int)0;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("v") , ::SuperCubeGenerator_obj::v,false);
			__result->Add(HX_CSTRING("i") , ::SuperCubeGenerator_obj::i,false);
			return __result;
		}
	};
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",65)
	return _Function_1_1::Block();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(SuperCubeGenerator_obj,subDivideCube3D,return )

Dynamic SuperCubeGenerator_obj::drawICube( double x,double y,double z,double width,Array< double > v,Array< int > i){
	HX_SOURCE_PUSH("SuperCubeGenerator_obj::drawICube")
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",70)
	double h = (width * .5);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",72)
	if (((v == null()))){
		HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",73)
		v = Array_obj< double >::__new();
	}
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",74)
	if (((i == null()))){
		HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",75)
		i = Array_obj< int >::__new();
	}
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",77)
	v->push((x - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",77)
	v->push((y + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",77)
	v->push((z - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",78)
	v->push((x + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",78)
	v->push((y + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",78)
	v->push((z - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",79)
	v->push((x + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",79)
	v->push((y - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",79)
	v->push((z - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",80)
	v->push((x - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",80)
	v->push((y - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",80)
	v->push((z - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",82)
	v->push((x - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",82)
	v->push((y + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",82)
	v->push((z + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",83)
	v->push((x + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",83)
	v->push((y + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",83)
	v->push((z + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",84)
	v->push((x + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",84)
	v->push((y - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",84)
	v->push((z + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",85)
	v->push((x - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",85)
	v->push((y - h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",85)
	v->push((z + h));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",87)
	i->push(((int)3 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",87)
	i->push(((int)1 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",87)
	i->push(::SuperCubeGenerator_obj::i_accum);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",88)
	i->push(((int)3 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",88)
	i->push(((int)2 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",88)
	i->push(((int)1 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",90)
	i->push(::SuperCubeGenerator_obj::i_accum);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",90)
	i->push(((int)5 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",90)
	i->push(((int)4 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",91)
	i->push(::SuperCubeGenerator_obj::i_accum);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",91)
	i->push(((int)1 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",91)
	i->push(((int)5 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",93)
	i->push(((int)2 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",93)
	i->push(((int)5 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",93)
	i->push(((int)1 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",94)
	i->push(((int)2 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",94)
	i->push(((int)6 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",94)
	i->push(((int)5 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",96)
	i->push(((int)3 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",96)
	i->push(((int)6 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",96)
	i->push(((int)7 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",97)
	i->push(((int)3 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",97)
	i->push(((int)2 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",97)
	i->push(((int)6 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",99)
	i->push(((int)6 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",99)
	i->push(((int)5 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",99)
	i->push(((int)4 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",100)
	i->push(((int)7 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",100)
	i->push(((int)6 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",100)
	i->push(((int)4 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",102)
	i->push(::SuperCubeGenerator_obj::i_accum);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",102)
	i->push(((int)7 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",102)
	i->push(((int)4 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",103)
	i->push(::SuperCubeGenerator_obj::i_accum);
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",103)
	i->push(((int)3 + ::SuperCubeGenerator_obj::i_accum));
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",103)
	i->push(((int)7 + ::SuperCubeGenerator_obj::i_accum));
	struct _Function_1_1{
		inline static Dynamic Block( Array< double > &v,Array< int > &i){
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("v") , v,false);
			__result->Add(HX_CSTRING("i") , i,false);
			return __result;
		}
	};
	HX_SOURCE_POS("../Tools/SuperCubeGenerator.hx",105)
	return _Function_1_1::Block(v,i);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(SuperCubeGenerator_obj,drawICube,return )


SuperCubeGenerator_obj::SuperCubeGenerator_obj()
{
}

void SuperCubeGenerator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuperCubeGenerator);
	HX_MARK_END_CLASS();
}

Dynamic SuperCubeGenerator_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"i_accum") ) { return i_accum; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawICube") ) { return drawICube_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"subDivideCube3D") ) { return subDivideCube3D_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic SuperCubeGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Array< double > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"i_accum") ) { i_accum=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SuperCubeGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("v"),
	HX_CSTRING("i"),
	HX_CSTRING("i_accum"),
	HX_CSTRING("subDivideCube3D"),
	HX_CSTRING("drawICube"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuperCubeGenerator_obj::v,"v");
	HX_MARK_MEMBER_NAME(SuperCubeGenerator_obj::i,"i");
	HX_MARK_MEMBER_NAME(SuperCubeGenerator_obj::i_accum,"i_accum");
};

Class SuperCubeGenerator_obj::__mClass;

void SuperCubeGenerator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("SuperCubeGenerator"), hx::TCanCast< SuperCubeGenerator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SuperCubeGenerator_obj::__boot()
{
	hx::Static(v);
	hx::Static(i);
	hx::Static(i_accum) = (int)0;
}

