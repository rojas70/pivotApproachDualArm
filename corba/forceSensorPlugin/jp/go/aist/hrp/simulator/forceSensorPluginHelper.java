package jp.go.aist.hrp.simulator;


/**
* jp/go/aist/hrp/simulator/forceSensorPluginHelper.java .
* IDL-to-Java コンパイラ (ポータブル), バージョン "3.1" で生成
* 生成元: forceSensorPlugin.idl
* 2012年10月30日 15時27分57秒 JST
*/

abstract public class forceSensorPluginHelper
{
  private static String  _id = "IDL:forceSensorPlugin:1.0";

  public static void insert (org.omg.CORBA.Any a, jp.go.aist.hrp.simulator.forceSensorPlugin that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static jp.go.aist.hrp.simulator.forceSensorPlugin extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      __typeCode = org.omg.CORBA.ORB.init ().create_interface_tc (jp.go.aist.hrp.simulator.forceSensorPluginHelper.id (), "forceSensorPlugin");
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static jp.go.aist.hrp.simulator.forceSensorPlugin read (org.omg.CORBA.portable.InputStream istream)
  {
    return narrow (istream.read_Object (_forceSensorPluginStub.class));
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, jp.go.aist.hrp.simulator.forceSensorPlugin value)
  {
    ostream.write_Object ((org.omg.CORBA.Object) value);
  }

  public static jp.go.aist.hrp.simulator.forceSensorPlugin narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof jp.go.aist.hrp.simulator.forceSensorPlugin)
      return (jp.go.aist.hrp.simulator.forceSensorPlugin)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      jp.go.aist.hrp.simulator._forceSensorPluginStub stub = new jp.go.aist.hrp.simulator._forceSensorPluginStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

  public static jp.go.aist.hrp.simulator.forceSensorPlugin unchecked_narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof jp.go.aist.hrp.simulator.forceSensorPlugin)
      return (jp.go.aist.hrp.simulator.forceSensorPlugin)obj;
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      jp.go.aist.hrp.simulator._forceSensorPluginStub stub = new jp.go.aist.hrp.simulator._forceSensorPluginStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

}
