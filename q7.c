#include<stdio.h>
#include<unistd.h>

int main(){
	int pid;
	pid=fork();
	if(pid==0){
		printf("child process is running");
		int ret = execl("/home/ajy/jay_1"," ",NULL);
	}
	else{
		wait(0);
		printf("parent process is running");
		printf("parent process has been stopped");
	}
	return 0;
}
