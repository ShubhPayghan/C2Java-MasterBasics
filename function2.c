//Header file for printf and scanf function
#include<stdio.h>

//entery point function from where execution starts
int main()
{
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

    Ans = Value1 + Value2;

    printf("%d",Ans);
    
    return 0;   //return 0 to OS which indicates success
}