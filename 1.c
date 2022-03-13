#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	char wb[50]="hello there 1";
	char rb[50];
	int len,fd,fd1,wr;
	fd = open("hello.txt",O_RDWR|O_CREAT,777);
	fd1 = open("outputt.txt",O_CREAT|O_RDWR,777);
	len = write(fd,wb,50);
	lseek(fd,0,SEEK_SET);
	read(fd,rb,50);
	printf("reading data=%s\n",rb);
	wr = write(fd1,rb,50);
	printf("data is=%d\n",wr);
	close(fd);
	close(fd1);
	return 0;
	
}
