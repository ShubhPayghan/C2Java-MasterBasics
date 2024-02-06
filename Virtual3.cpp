#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j,k;
        void Fun()  //defination
        {
            cout<<"Inside Base fun\n";
        }
        void Gun()
        {
            cout<<"Inside Base gun\n";
        }
        void Sun()
        {
            cout<<"Inside Base Sun\n";    
        }
        void Run()
        {
             cout<<"Inside Base Run\n";    
        }
};

class Derived : public Base
{
    public:
        int a, b;
        void Gun()  //redefination
        {
            cout<<"Inside derived gun\n";
        }
        void Run()    //redefination
        {
            cout<<"Inside Derived Run\n";    
        }
};

int main()
{

    Base *bp = new Derived;  //UC
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();

    return 0;
}