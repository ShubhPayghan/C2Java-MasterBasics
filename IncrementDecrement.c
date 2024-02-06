#include<stdio.h>

int main()
{
    int a=10;
    int b=10;
    int c=10;
    int d=10;

    a++; //Increment
    ++b; //Increment

    c--; //Decrement
    --d; //Decrement

    printf("%d\n",a); //output 11
    printf("%d\n",b); //output 11
    printf("%d\n",c); //output 9
    printf("%d\n",d); //output 9

    return 0;
}