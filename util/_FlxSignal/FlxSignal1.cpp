// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9021ea3f58f5bd9_213_new,"flixel.util._FlxSignal.FlxSignal1","new",0x17c62462,"flixel.util._FlxSignal.FlxSignal1.new","flixel/util/FlxSignal.hx",213,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_d9021ea3f58f5bd9_282_dispatch1,"flixel.util._FlxSignal.FlxSignal1","dispatch1",0x100555b9,"flixel.util._FlxSignal.FlxSignal1.dispatch1","flixel/util/FlxSignal.hx",282,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxSignal1_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9021ea3f58f5bd9_213_new)
HXLINE( 214)		super::__construct();
HXLINE( 215)		this->dispatch = this->dispatch1_dyn();
            	}

Dynamic FlxSignal1_obj::__CreateEmpty() { return new FlxSignal1_obj; }

void *FlxSignal1_obj::_hx_vtable = 0;

Dynamic FlxSignal1_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSignal1_obj > _hx_result = new FlxSignal1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSignal1_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4515ccf2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4515ccf2;
	} else {
		return inClassId==(int)0x6170b6f4;
	}
}

void FlxSignal1_obj::dispatch1( ::Dynamic value1){
            	HX_STACKFRAME(&_hx_pos_d9021ea3f58f5bd9_282_dispatch1)
HXLINE( 283)		this->processingListeners = true;
HXLINE( 284)		{
HXLINE( 284)			int _g = 0;
HXDLIN( 284)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 284)			while((_g < _g1->length)){
HXLINE( 284)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 284)				_g = (_g + 1);
HXLINE( 286)				handler->listener(value1);
HXLINE( 288)				if (handler->dispatchOnce) {
HXLINE( 289)					this->remove(handler->listener);
            				}
            			}
            		}
HXLINE( 292)		this->processingListeners = false;
HXLINE( 294)		{
HXLINE( 294)			int _g2 = 0;
HXDLIN( 294)			::Array< ::Dynamic> _g3 = this->pendingRemove;
HXDLIN( 294)			while((_g2 < _g3->length)){
HXLINE( 294)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g3->__get(_g2).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 294)				_g2 = (_g2 + 1);
HXLINE( 296)				this->remove(handler->listener);
            			}
            		}
HXLINE( 298)		if ((this->pendingRemove->length > 0)) {
HXLINE( 299)			this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSignal1_obj,dispatch1,(void))


::hx::ObjectPtr< FlxSignal1_obj > FlxSignal1_obj::__new() {
	::hx::ObjectPtr< FlxSignal1_obj > __this = new FlxSignal1_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSignal1_obj > FlxSignal1_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSignal1_obj *__this = (FlxSignal1_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSignal1_obj), true, "flixel.util._FlxSignal.FlxSignal1"));
	*(void **)__this = FlxSignal1_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSignal1_obj::FlxSignal1_obj()
{
}

::hx::Val FlxSignal1_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch1") ) { return ::hx::Val( dispatch1_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSignal1_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxSignal1_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSignal1_obj_sMemberFields[] = {
	HX_("dispatch1",37,14,f1,78),
	::String(null()) };

::hx::Class FlxSignal1_obj::__mClass;

void FlxSignal1_obj::__register()
{
	FlxSignal1_obj _hx_dummy;
	FlxSignal1_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSignal.FlxSignal1",70,0b,c8,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSignal1_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSignal1_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSignal1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSignal1_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
