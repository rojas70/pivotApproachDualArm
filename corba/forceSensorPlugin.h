// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __forceSensorPlugin_hh__
#define __forceSensorPlugin_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
#endif



#ifndef __OpenHRPCommon_hh_EXTERNAL_GUARD__
#define __OpenHRPCommon_hh_EXTERNAL_GUARD__
#include <OpenHRPCommon.h>
#endif
#ifndef __ViewSimulator_hh_EXTERNAL_GUARD__
#define __ViewSimulator_hh_EXTERNAL_GUARD__
#include <ViewSimulator.h>
#endif
#ifndef __HRPcontroller_hh_EXTERNAL_GUARD__
#define __HRPcontroller_hh_EXTERNAL_GUARD__
#include <HRPcontroller.h>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





#ifndef __forceSensorPlugin__
#define __forceSensorPlugin__

class forceSensorPlugin;
class _objref_forceSensorPlugin;
class _impl_forceSensorPlugin;

typedef _objref_forceSensorPlugin* forceSensorPlugin_ptr;
typedef forceSensorPlugin_ptr forceSensorPluginRef;

class forceSensorPlugin_Helper {
public:
  typedef forceSensorPlugin_ptr _ptr_type;

  static _ptr_type _nil();
  static _CORBA_Boolean is_nil(_ptr_type);
  static void release(_ptr_type);
  static void duplicate(_ptr_type);
  static void marshalObjRef(_ptr_type, cdrStream&);
  static _ptr_type unmarshalObjRef(cdrStream&);
};

typedef _CORBA_ObjRef_Var<_objref_forceSensorPlugin, forceSensorPlugin_Helper> forceSensorPlugin_var;
typedef _CORBA_ObjRef_OUT_arg<_objref_forceSensorPlugin,forceSensorPlugin_Helper > forceSensorPlugin_out;

#endif

// interface forceSensorPlugin
class forceSensorPlugin {
public:
  // Declarations for this interface type.
  typedef forceSensorPlugin_ptr _ptr_type;
  typedef forceSensorPlugin_var _var_type;

  static _ptr_type _duplicate(_ptr_type);
  static _ptr_type _narrow(::CORBA::Object_ptr);
  static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
  
  static _ptr_type _nil();

  static inline void _marshalObjRef(_ptr_type, cdrStream&);

  static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
    omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
    if (o)
      return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
    else
      return _nil();
  }

  static _core_attr const char* _PD_repoId;

  // Other IDL defined within this scope.
  
};

class _objref_forceSensorPlugin :
  public virtual OpenHRP::_objref_Plugin
{
public:
  void test();

  inline _objref_forceSensorPlugin()  { _PR_setobj(0); }  // nil
  _objref_forceSensorPlugin(omniIOR*, omniIdentity*);

protected:
  virtual ~_objref_forceSensorPlugin();

  
private:
  virtual void* _ptrToObjRef(const char*);

  _objref_forceSensorPlugin(const _objref_forceSensorPlugin&);
  _objref_forceSensorPlugin& operator = (const _objref_forceSensorPlugin&);
  // not implemented

  friend class forceSensorPlugin;
};

class _pof_forceSensorPlugin : public _OMNI_NS(proxyObjectFactory) {
public:
  inline _pof_forceSensorPlugin() : _OMNI_NS(proxyObjectFactory)(forceSensorPlugin::_PD_repoId) {}
  virtual ~_pof_forceSensorPlugin();

  virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
  virtual _CORBA_Boolean is_a(const char*) const;
};

class _impl_forceSensorPlugin :
  public virtual OpenHRP::_impl_Plugin
{
public:
  virtual ~_impl_forceSensorPlugin();

  virtual void test() = 0;
  
public:  // Really protected, workaround for xlC
  virtual _CORBA_Boolean _dispatch(omniCallHandle&);

private:
  virtual void* _ptrToInterface(const char*);
  virtual const char* _mostDerivedRepoId();
  
};


_CORBA_GLOBAL_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_forceSensorPlugin;



class POA_forceSensorPlugin :
  public virtual _impl_forceSensorPlugin,
  public virtual POA_OpenHRP::Plugin
{
public:
  virtual ~POA_forceSensorPlugin();

  inline ::forceSensorPlugin_ptr _this() {
    return (::forceSensorPlugin_ptr) _do_this(::forceSensorPlugin::_PD_repoId);
  }
};





template <class _omniT>
class POA_forceSensorPlugin_tie : public virtual POA_forceSensorPlugin
{
public:
  POA_forceSensorPlugin_tie(_omniT& t)
    : pd_obj(&t), pd_poa(0), pd_rel(0) {}
  POA_forceSensorPlugin_tie(_omniT& t, ::PortableServer::POA_ptr p)
    : pd_obj(&t), pd_poa(p), pd_rel(0) {}
  POA_forceSensorPlugin_tie(_omniT* t, _CORBA_Boolean r=1)
    : pd_obj(t), pd_poa(0), pd_rel(r) {}
  POA_forceSensorPlugin_tie(_omniT* t, ::PortableServer::POA_ptr p,_CORBA_Boolean r=1)
    : pd_obj(t), pd_poa(p), pd_rel(r) {}
  ~POA_forceSensorPlugin_tie() {
    if( pd_poa )  ::CORBA::release(pd_poa);
    if( pd_rel )  delete pd_obj;
  }

  _omniT* _tied_object() { return pd_obj; }

  void _tied_object(_omniT& t) {
    if( pd_rel )  delete pd_obj;
    pd_obj = &t;
    pd_rel = 0;
  }

  void _tied_object(_omniT* t, _CORBA_Boolean r=1) {
    if( pd_rel )  delete pd_obj;
    pd_obj = t;
    pd_rel = r;
  }

  _CORBA_Boolean _is_owner()        { return pd_rel; }
  void _is_owner(_CORBA_Boolean io) { pd_rel = io;   }

  ::PortableServer::POA_ptr _default_POA() {
    if( !pd_poa )  return ::PortableServer::POA::_the_root_poa();
    else           return ::PortableServer::POA::_duplicate(pd_poa);
  }

  void test() { pd_obj->test(); }
  void start() { pd_obj->start(); }
  void stop() { pd_obj->stop(); }
  void sendMsg(const char* msg) { pd_obj->sendMsg(msg); }


private:
  _omniT*                   pd_obj;
  ::PortableServer::POA_ptr pd_poa;
  _CORBA_Boolean            pd_rel;
};



#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, forceSensorPlugin_ptr _s);
void operator<<=(::CORBA::Any& _a, forceSensorPlugin_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, forceSensorPlugin_ptr& _s);



inline void
forceSensorPlugin::_marshalObjRef(::forceSensorPlugin_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_forceSensorPlugin
#endif

#endif  // __forceSensorPlugin_hh__

