#include<stdio.h>

int main(int argc,char *argv[]){
	execlp("vim","vim",argv[1],NULL);
	return 0;
}
