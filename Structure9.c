#include<stdio.h>

struct Hello
    {
        int no;
        float d;
    };
    
struct Demo
{
    int i;
    float f;
    struct Hello hobj1;
    struct Hello hobj2;
    
}dobj;

int main()
{
    dobj.i=11;
    dobj.f=99.99f;
    printf("%d\n",sizeof(dobj));
    return 0;
}