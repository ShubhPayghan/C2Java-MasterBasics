#include<stdio.h>
int main()
{
    int i=10;
    int No=0;

    No=++i; //pre increment

    printf("%d\n",No); // 11
    printf("%d",i);  //11

    return 0;
}