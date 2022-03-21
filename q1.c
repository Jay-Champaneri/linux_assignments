#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){
	int fd;
	fd=open("/home/jay/j",O_RDONLY,0777);
	printf("file descriptor is :%d",fd);
}
