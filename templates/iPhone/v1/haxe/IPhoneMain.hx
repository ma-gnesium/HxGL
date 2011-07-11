

class IPhoneMain
{
   function new()
   {
      // This will be found in the class path - "src" by default, but you can change the class
      //  name here, and the class path in the common.hxml
      untyped Main.main();
   }


   public static function main ()
   {
      new IPhoneMain();
   }

}
   

