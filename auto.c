#include<stdio.h>

void display()
{
    int no = 11;   //auto int no = 11;
    int i;         //auto int i;
    auto int j = 21;

    printf("Value of no : %d\n", no);
    printf("Value of i : %d\n",i);
}

int main()
{
    display();

    //printf("%d\n",no);

    return 0;
}