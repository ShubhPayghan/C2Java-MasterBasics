#include<stdio.h>
#include<fcntl.h> 
#include<unistd.h> 
#include<string.h>
int main()
{
    int fd = 0;  //fd means file discriptor
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);  
    Ret = read(fd,Arr,10); //(kashastun read karycha, kashat wachiyacha, kiti wachaycha)

    printf("%d bytes gets written in the file\n",Ret);
    printf("Data is: %s\n",Arr);
    close(fd);

    return 0;
}
//Output :10 bytes gets written in the file
//Data is: Marvellous@
