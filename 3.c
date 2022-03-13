#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	execl("/bin/ls","ls","-l",NULL);
	printf("ls -l\n");
	return 0;
}
