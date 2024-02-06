
class Overriding
{
    public static void main(String args[])
    {
        Base bobj = new Derived();  //UC
        //Base bobj = new Base();  //NC
        //Derived dobj = new Derived)(); //NC
        // Derived dobj = new Base(); //DC

        bobj.fun(); //Derived fun    overriding 
        bobj.gun(); //Base gun
        bobj.sun();  //Derived sun    overriding
        bobj.run();
        //bobj.run(11); 
        //bobj.mun(); error can't find symbol
    }
}


class Base
{
    public void fun() //1000
    {
        System.out.println("Inside base fun");
    }
    public void gun() //2000
    {
        System.out.println("Inside base gun");
    }
    public void sun()  //3000
    {
        System.out.println("Inside base sun");
    }
    public void run()  //4000
    {
        System.out.println("Inside base run");
    }
}

class Derived extends Base
{
    public void fun() //5000
    {
        System.out.println("Inside derived fun");
    }
    public void sun()  ////6000
    {
        System.out.println("Inside derived sun");
    }
    public void run(int A)  //7000
    {
        System.out.println("Inside derived run with one parameter");
    }
    public void mun()  //8000
    {
        System.out.println("Inside derived mun");
    }
}
