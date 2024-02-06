import java. sql.*;     //1
class Database
{
    public static void main(String arg[]) throws exception
    {
        String URL = "jdbc:mysql : //localhost:3306/ppa49";
        String Username = "root";
        String Password = "root";
        String Query = "select* from student";

        Connection cobj = DriverManager.getConnection(URL, Username,Password);  //2 function cha name getconnection...driver manager ha API ahe

        Statement sobj = cobj.createStatement();        //3
        
        ResultSet robj = sobj.executeQuery(Query);      //4

        while(robj.next())      //5
        {
            System.out.Println("Rno :"+robj.getInt("rno"));
            System.out.Println("Name :"+robj.getString("name"));
            System.out.Println("address :"+robj.getString("address"));
            System.out.Println("Marks :"+robj.getInt("marks"));
        }
    }
}

//execute()         create table
//executeQuery      select
//executeUate     delte / update/ alter / insert

/*
line 1 : jdbc che api tyatun yenarr ahet mhanun import kel



line 11 object tayar zala ki page blank page mhanjee statement madhe  statment create hota
je exicute hoil quiry te resultset madhe mhanje robj madhe jama hoil
 

while loop lavla data print karnyasathi
 */