#include<stdio.h>
int main()
{
    int Standard = 0;

    printf("Primary School Portal\n");
    printf("Enter your devision:\n");
    scanf("%d",&Standard);
    
    switch(Standard) // switch case(faster than if...else)
    {
        case1:
             printf("Your exam is at 1 PM\n");
             break;
        case2:
            printf("Your exam is at 2 PM\n");
            break;
        case3:
            printf("Your exam is at 3 PM\n");
            break;
        case4:
            printf("Your exam is at 4 PM\n");
            break;
        default:
            printf("Invalid standard\n");
            
    }
    return 0;
}
