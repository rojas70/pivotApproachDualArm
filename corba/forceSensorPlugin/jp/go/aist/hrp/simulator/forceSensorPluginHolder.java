package jp.go.aist.hrp.simulator;

/**
* jp/go/aist/hrp/simulator/forceSensorPluginHolder.java .
* IDL-to-Java コンパイラ (ポータブル), バージョン "3.1" で生成
* 生成元: forceSensorPlugin.idl
* 2012年10月30日 15時27分57秒 JST
*/

public final class forceSensorPluginHolder implements org.omg.CORBA.portable.Streamable
{
  public jp.go.aist.hrp.simulator.forceSensorPlugin value = null;

  public forceSensorPluginHolder ()
  {
  }

  public forceSensorPluginHolder (jp.go.aist.hrp.simulator.forceSensorPlugin initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = jp.go.aist.hrp.simulator.forceSensorPluginHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    jp.go.aist.hrp.simulator.forceSensorPluginHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return jp.go.aist.hrp.simulator.forceSensorPluginHelper.type ();
  }

}
