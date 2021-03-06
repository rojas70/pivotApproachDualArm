// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "forceSensorPlugin.h"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



forceSensorPlugin_ptr forceSensorPlugin_Helper::_nil() {
  return ::forceSensorPlugin::_nil();
}

::CORBA::Boolean forceSensorPlugin_Helper::is_nil(::forceSensorPlugin_ptr p) {
  return ::CORBA::is_nil(p);

}

void forceSensorPlugin_Helper::release(::forceSensorPlugin_ptr p) {
  ::CORBA::release(p);
}

void forceSensorPlugin_Helper::marshalObjRef(::forceSensorPlugin_ptr obj, cdrStream& s) {
  ::forceSensorPlugin::_marshalObjRef(obj, s);
}

forceSensorPlugin_ptr forceSensorPlugin_Helper::unmarshalObjRef(cdrStream& s) {
  return ::forceSensorPlugin::_unmarshalObjRef(s);
}

void forceSensorPlugin_Helper::duplicate(::forceSensorPlugin_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

forceSensorPlugin_ptr
forceSensorPlugin::_duplicate(::forceSensorPlugin_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

forceSensorPlugin_ptr
forceSensorPlugin::_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


forceSensorPlugin_ptr
forceSensorPlugin::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

forceSensorPlugin_ptr
forceSensorPlugin::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_forceSensorPlugin _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_forceSensorPlugin* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_forceSensorPlugin;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* forceSensorPlugin::_PD_repoId = "IDL:forceSensorPlugin:1.0";


typedef OpenHRP::Plugin OpenHRP_Plugin;
typedef OpenHRP::_impl_Plugin OpenHRP__impl_Plugin;
typedef OpenHRP::_objref_Plugin OpenHRP__objref_Plugin;

typedef OpenHRP::CommandReceiver OpenHRP_CommandReceiver;
typedef OpenHRP::_impl_CommandReceiver OpenHRP__impl_CommandReceiver;
typedef OpenHRP::_objref_CommandReceiver OpenHRP__objref_CommandReceiver;

_objref_forceSensorPlugin::~_objref_forceSensorPlugin() {
  
}


_objref_forceSensorPlugin::_objref_forceSensorPlugin(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::forceSensorPlugin::_PD_repoId, ior, id, 1),
   OpenHRP__objref_Plugin(ior, id)
   
{
  _PR_setobj(this);
}

void*
_objref_forceSensorPlugin::_ptrToObjRef(const char* id)
{
  if( id == ::forceSensorPlugin::_PD_repoId )
    return (::forceSensorPlugin_ptr) this;
  if( id == ::OpenHRP::Plugin::_PD_repoId )
    return (::OpenHRP::Plugin_ptr) this;

  if( id == ::OpenHRP::CommandReceiver::_PD_repoId )
    return (::OpenHRP::CommandReceiver_ptr) this;


  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::forceSensorPlugin::_PD_repoId) )
    return (::forceSensorPlugin_ptr) this;
  if( omni::strMatch(id, ::OpenHRP::Plugin::_PD_repoId) )
    return (::OpenHRP::Plugin_ptr) this;

  if( omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId) )
    return (::OpenHRP::CommandReceiver_ptr) this;


  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  void
class _0RL_cd_037663e87be4cca3_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_037663e87be4cca3_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall)
  {
    
  }
  
  
    
  
  
};

// Local call call-back function.
static void
_0RL_lcfn_037663e87be4cca3_10000000(omniCallDescriptor*, omniServant* svnt)
{
  
  _impl_forceSensorPlugin* impl = (_impl_forceSensorPlugin*) svnt->_ptrToInterface(forceSensorPlugin::_PD_repoId);
  impl->test();


}

void _objref_forceSensorPlugin::test()
{
  _0RL_cd_037663e87be4cca3_00000000 _call_desc(_0RL_lcfn_037663e87be4cca3_10000000, "test", 5);


  _invoke(_call_desc);



}
_pof_forceSensorPlugin::~_pof_forceSensorPlugin() {}


omniObjRef*
_pof_forceSensorPlugin::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::_objref_forceSensorPlugin(ior, id);
}


::CORBA::Boolean
_pof_forceSensorPlugin::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::forceSensorPlugin::_PD_repoId) )
    return 1;
  if( omni::ptrStrMatch(id, OpenHRP::Plugin::_PD_repoId) )
    return 1;

  if( omni::ptrStrMatch(id, OpenHRP::CommandReceiver::_PD_repoId) )
    return 1;


  return 0;
}

const _pof_forceSensorPlugin _the_pof_forceSensorPlugin;

_impl_forceSensorPlugin::~_impl_forceSensorPlugin() {}


::CORBA::Boolean
_impl_forceSensorPlugin::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "test") ) {

    _0RL_cd_037663e87be4cca3_00000000 _call_desc(_0RL_lcfn_037663e87be4cca3_10000000, "test", 5, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  
#ifndef _MSC_VER
  if( OpenHRP__impl_Plugin::_dispatch(_handle) ) {
    return 1;
  }
#else
  // Work-around for incorrect MSVC code generation.
  if( ((OpenHRP__impl_Plugin*)this)->
      OpenHRP__impl_Plugin::_dispatch(_handle) ) {
    return 1;
  }
#endif


  return 0;
}

void*
_impl_forceSensorPlugin::_ptrToInterface(const char* id)
{
  if( id == ::forceSensorPlugin::_PD_repoId )
    return (::_impl_forceSensorPlugin*) this;
  if( id == ::OpenHRP::Plugin::_PD_repoId )
    return (::OpenHRP::_impl_Plugin*) this;

  if( id == ::OpenHRP::CommandReceiver::_PD_repoId )
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::forceSensorPlugin::_PD_repoId) )
    return (::_impl_forceSensorPlugin*) this;
  if( omni::strMatch(id, ::OpenHRP::Plugin::_PD_repoId) )
    return (::OpenHRP::_impl_Plugin*) this;

  if( omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId) )
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
_impl_forceSensorPlugin::_mostDerivedRepoId()
{
  return ::forceSensorPlugin::_PD_repoId;
}

POA_forceSensorPlugin::~POA_forceSensorPlugin() {}

