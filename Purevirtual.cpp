#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j,k;

        void fun()   //concrete method
        {
            cout<<"Base fun\n";   
        }
        virtual void gun()   //concrete method
        {
            cout<<"Base gun \n";   
        }
        virtual int Addition (int no1, int no2) = 0; //abstract method
};
class Derived : public Base
{
    public :
        int a,b;

        void gun()   //concrete method
        {
            cout<<"Derived gun\n";   
        }
        virtual void sun()   //concrete method
        {
            cout<<"Derived sun \n";   
        }
        int Addition (int no1, int no2) // concrete method
        {
            return no1 + no2;
        }
};

int main()
{
    //Base bobj; error   /*this line shows error because the the Base class contain pure virtual funtion in it thats why we cannot create the object of that class*/ 
    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is:"<<Ret<<"\n";
    
    return 0;
}