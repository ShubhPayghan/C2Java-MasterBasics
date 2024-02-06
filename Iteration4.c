#include<stdio.h>

int main()
{
    int i=1;
    int count;

    printf("Enter number of times you want to display Jay Ganesh...\n");
    scanf("%d",&count);

    while(i<=count)
    {
        printf("Jay Ganesh...\n");
        i++;
    }    

    return 0;
}