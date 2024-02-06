
class Final1
{
    public static void main(String args[])
    {
        Demo dobj = new Demo();
        System.out.println("Value of A is :"+dobj.A);
        System.out.println("Value of B is :"+dobj.B);
        dobj.A++;
        //dobj.B++;

        Demo dobj2 = new Demo(51,101);
        System.out.println("Value of A is :"+dobj2.A);
        System.out.println("Value of B is :"+dobj2.B);
    }
}

class Demo
{
    public int A;
    public final int B;

    Demo()   //default constructor
    {
        A = 11;
        B = 21;
    }
    Demo(int i, int j)   //parameterized constructor
    {
        A = i;
        B = j;
    }
}