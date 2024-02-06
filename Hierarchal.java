class Hierarchical
{
    public static void main(String yz[])
    {
        Derived dobj1 = new Derived();
        DerivedX dobj2 = new DerivedX();

        dobj1.fun();
        dobj2.fun();
    }
}

class Base
{
    public int A, b;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived constructor");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}
class DerivedX extends Base
{
    public int P , Q;
    public DerivedX()
    {
        System.out.println("DerivedX constructor");
    }
}