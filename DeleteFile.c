#include<stdio.h>
#include<fcntl.h> 
#include<unistd.h> 
#include<string.h>
int main()
{
    unlink("Marevllous.txt");

    printf("File deleted successfully...\n");

    return 0;
}

