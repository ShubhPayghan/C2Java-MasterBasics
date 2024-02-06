import java.io.*;

class DeleteFile
{
    public  static void main(String args[]) 
    {
        try
        {
            File fobj = new File("PPA.txt");
            fobj.delete();
        }
        catch(Exception obj)
        {}
    }
}