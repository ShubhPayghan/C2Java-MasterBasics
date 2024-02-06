#include<stdio.h>

int main()
{
    int no=11;
    int *p=&no;

    printf("%d\n",no);   //11
    printf("%u\n",&no);   //3846174876
    printf("%d\n",sizeof(no));   //4
    printf("%u\n",p);   //3846174876
    printf("%u\n",&p);  //3846174864
    printf("%d\n",*p);   //11
    printf("%d\n",sizeof(p));  //8 

    return 0;
}
