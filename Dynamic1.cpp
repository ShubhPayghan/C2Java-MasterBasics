#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int Arr[5];   //static memory allocation
    
    int *ptr1 = (int *)malloc(5 * sizeof(int));  //dynamic in c

    int *ptr2 = new int[5];   //dynamic in c++

    free(ptr1);  //c

    delete ptr2[];

    return 0;
}