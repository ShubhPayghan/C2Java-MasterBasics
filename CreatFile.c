#include<stdio.h>
#include<fcntl.h> // file control(cntl) for open read write
#include<unistd.h> //universal standard info required for file manipulator.

int main()
{
    int fd = 0;  //fd means file discriptor

    fd = creat("Marvellous.txt",0777);

    if(fd != -1)
    {
        printf("File is successfully created with FD : %d\n",fd);
    }

    return 0;
}