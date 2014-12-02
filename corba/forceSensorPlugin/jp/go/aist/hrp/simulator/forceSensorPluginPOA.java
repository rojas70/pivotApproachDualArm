package jp.go.aist.hrp.simulator;


/**
* jp/go/aist/hrp/simulator/forceSensorPluginPOA.java .
* IDL-to-Java コンパイラ (ポータブル), バージョン "3.1" で生成
* 生成元: forceSensorPlugin.idl
* 2012年10月30日 15時27分57秒 JST
*/

public abstract class forceSensorPluginPOA extends org.omg.PortableServer.Servant
 implements jp.go.aist.hrp.simulator.forceSensorPluginOperations, org.omg.CORBA.portable.InvokeHandler
{

  // Constructors

  private static java.util.Hashtable _methods = new java.util.Hashtable ();
  static
  {
    _methods.put ("test", new java.lang.Integer (0));
    _methods.put ("start", new java.lang.Integer (1));
    _methods.put ("stop", new java.lang.Integer (2));
    _methods.put ("sendMsg", new java.lang.Integer (3));
  }

  public org.omg.CORBA.portable.OutputStream _invoke (String $method,
                                org.omg.CORBA.portable.InputStream in,
                                org.omg.CORBA.portable.ResponseHandler $rh)
  {
    org.omg.CORBA.portable.OutputStream out = null;
    java.lang.Integer __method = (java.lang.Integer)_methods.get ($method);
    if (__method == null)
      throw new org.omg.CORBA.BAD_OPERATION (0, org.omg.CORBA.CompletionStatus.COMPLETED_MAYBE);

    switch (__method.intValue ())
    {
       case 0:  // forceSensorPlugin/test
       {
         this.test ();
         out = $rh.createReply();
         break;
       }

       case 1:  // OpenHRP/Plugin/start
       {
         this.start ();
         out = $rh.createReply();
         break;
       }

       case 2:  // OpenHRP/Plugin/stop
       {
         this.stop ();
         out = $rh.createReply();
         break;
       }

       case 3:  // OpenHRP/CommandReceiver/sendMsg
       {
         String msg = in.read_string ();
         this.sendMsg (msg);
         out = $rh.createReply();
         break;
       }

       default:
         throw new org.omg.CORBA.BAD_OPERATION (0, org.omg.CORBA.CompletionStatus.COMPLETED_MAYBE);
    }

    return out;
  } // _invoke

  // Type-specific CORBA::Object operations
  private static String[] __ids = {
    "IDL:forceSensorPlugin:1.0", 
    "IDL:OpenHRP/Plugin:1.0", 
    "IDL:OpenHRP/CommandReceiver:1.0"};

  public String[] _all_interfaces (org.omg.PortableServer.POA poa, byte[] objectId)
  {
    return (String[])__ids.clone ();
  }

  public forceSensorPlugin _this() 
  {
    return forceSensorPluginHelper.narrow(
    super._this_object());
  }

  public forceSensorPlugin _this(org.omg.CORBA.ORB orb) 
  {
    return forceSensorPluginHelper.narrow(
    super._this_object(orb));
  }


} // class forceSensorPluginPOA
