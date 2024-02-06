
#include<stdio.h>
//accpet number from user
int main()//Entery point function
{
    int No = 0; //local variable 
    int Ans = 0; //local variable

    printf("Enter number:\n");
    scanf("%d",&No);

//selection using if else
    Ans = No % 2; //mod operator(%)

    if(Ans==0)  //comparision operator(==)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0; //convey operating system that succefully run
}