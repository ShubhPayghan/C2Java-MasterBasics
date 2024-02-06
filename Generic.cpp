#include<iostream>
using namespace std;

template <class T>
T Addition(T no1, T no2)
{
    T ans;
    ans = no1+no2;
    return ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Addition<int>(10,11);
    fRet = Addition<float>(10.0,11.0f);
    dRet = Addition<double>(10.0,11.0);

    cout<<iRet<<"\n";
    cout<<fRet<<"\n";
    cout<<dRet<<"\n";

    return 0;
}