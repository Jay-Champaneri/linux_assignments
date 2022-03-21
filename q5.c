#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int pid;
	char rb[50];
	pid=fork();
	if(pid==0){
		printf("child process is running");
		int fd;
		fd = open("rf.c",O_RDONLY);
		read(fd,rb,100);
		printf("%s",rb);
		printf("child process has been stopped");
	}
	else{
		wait(0);
		printf("parrent process");
		printf("now parent process stopped");
	}
	return 0;
}
