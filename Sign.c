#include<stdio.h>

int main()
{
//he tinhi veriables bydefault signed variables ahet
    int i=10;  
    signed int j=20;
    signed int k=-30;

    unsigned int a=40;

    int x=10;          // 4bytes
    short int y=10;    // 2bytes
    long int z=20;     // 8bytes

    printf("Size of x is:%d\n",sizeof(x));
    printf("Size of x is:%d\n",sizeof(y));
    printf("Size of x is:%d\n",sizeof(z));

    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",k);
    printf("%d\n",a);
   return 0;
}