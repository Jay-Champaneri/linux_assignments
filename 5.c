#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

char buffer[]="\0";
int main(){
	int fd = creat("q5.txt",777);
	if(fd<0){
		printf("file is not yet created");
		exit(1);
	}
	if(lseek(fd,4096,SEEK_SET)<0){
		printf("not expected! error");
		exit(1);
	}
	if(write(fd,buffer,sizeof(buffer))<0){
		printf("again error");
		exit(1);
	}
	return 0;
}
