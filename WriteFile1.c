#include<stdio.h>
#include<fcntl.h> 
#include<unistd.h> 
#include<string.h>
int main()
{
    int fd = 0;  //fd means file discriptor
    char Arr[]= "PRE PLACEMENT ACTIVITY";
    int Ret = 0;
    fd = open("Marvellous.txt",O_RDWR | O_APPEND);  
    Ret = write(fd,Arr,strlen(Arr)); //(kashast lihych, ky lihyacha, kiti lihaycha)

    printf("%d bytes gets written in the file\n",Ret);
    close(fd);

    return 0;
}
// O_RDONLY : Read
// O_WRONLY : Write
// O_RDWR : Read + Write