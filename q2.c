#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	pid_t p,p_child;
	p = fork();
	if(p==0){
		p_child=fork();
		if(p_child==0){
			printf("grand child process %d",getpid());
			printf("grand child process parent id %d",getppid());
			execlp("jay","jay",NULL);
		}
		wait(NULL);
		printf("child process id %d",getpid());
		printf("parent process id %d",getppid());
		execlp("ls","-a",NULL);
	}
	else{
		wait(NULL);
		printf("parent process id %d",getpid());
		printf("child process id%d",p);
	}
	return 0;
}
