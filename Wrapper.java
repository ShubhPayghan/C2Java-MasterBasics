
class Wrapper
{
    public static void main(String args[]) 
    {
        int no = 11;  
        Integer iobj = no; //Boxing

        System.out.println(no);
        System.out.println(iobj);

        int i = iobj; //unboxing
        System.out.println(i);  
    }             
}
