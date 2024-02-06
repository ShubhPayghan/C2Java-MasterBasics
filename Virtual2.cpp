#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j,l;
        void Fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int a, b;
        void Gun()
        {
            cout<<"Inside derived gun\n";
        }
};

int main()
{
    Base *bp1 = new Base; //NC  means no casting
    Derived *dp1 = new Derived; //NC 
    Base *bp2 = new Derived;  //UC up casting
    //Derived *dp2 = new Base;  //DC or down casting this is not allowed bcoz the capacity of derived class is more than the base class

    return 0;
}