#include<stdio.h>

int main()
{
    char ch='A';
    int i=11;
    float f=31.90f;
    double d=907865;

    char *cp=&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    return 0;
}