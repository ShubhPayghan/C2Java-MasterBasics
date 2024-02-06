#include<stdio.h>

int main()
{
    int no=21;
    int *p=&no;
    int **q=&p;
    int **b=&p;
    int ***r=&q;
    int ****x=&r;
    int *****y=&x;

    printf("%d\n",sizeof(**q));
    return 0;
}