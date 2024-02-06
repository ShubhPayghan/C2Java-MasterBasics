 
class AbstractDemo
{
    public static void main(String args[])
    {
        System.out.println("Inside AbstractDemo main");
        //here we cannot create object of AbstracrDemo class
        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
    }
}
abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Demo Constructor\n");
        this.A = 0;
        this.B = 0;
    }
    abstract void fun();  //virtual void fun()=0; abstract method

    void gun()  //concrete method
    {
        System.out.println("Inside gun of Demo");
    }
}
class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello constructor");
    }
    public void fun()
    {
        System.out.println("Inside fun of Hello");
    }
}