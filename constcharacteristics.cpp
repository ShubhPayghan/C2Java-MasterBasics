#include<iostream>
using namespace std;

class Demo
{
    public:
        int i; 
        const int j;
        const int k;
        //parameterised constructor
        Demo(int a , int b, int c) : j(b), k(c)   //initialization list
        {
            i = a;
            //j = b;
            //k = c;                
        }
};

int main()
{
    Demo obj(11,21,51);
    cout<<"Value of i :"<<obj.i<<"\n";
    cout<<"Value of j :"<<obj.j<<"\n";
    cout<<"Value of k :"<<obj.k<<"\n";

    obj.i++; //Allowed
    //obj.j++; //Not allowed
    //obj.k++; //Not allowed
    return 0;
}