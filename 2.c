#include<stdio.h>
#include<fcntl.h>

int main(){
	int fd,fd1,fd2,len,x,current;
	char wb[50]="hello there !! ",buffer[50]="how you doing !";
	char rb[50];
	
	fd = open("heelo.txt",O_RDWR|O_CREAT,777);
	len = write(fd,wb,50);
	lseek(fd,0,SEEK_SET);
	read(fd,rb,len);
	printf("data is %s\n",rb);
	
	
	fd1 = open("write.txt",O_RDWR|O_CREAT,777);
	lseek(fd1,0,SEEK_END);
	current = lseek(fd1,0,SEEK_CUR);
	printf("current position is %d\n",current);
	
	x = write(fd1,buffer,sizeof(buffer));
	lseek(fd1,len,SEEK_SET);
	
	char buffer1[x];
	lseek(fd1,0,SEEK_SET);
	read(fd1,buffer1,x);
	printf("data here=%s\n",buffer1);
	
	close(fd);
	close(fd1);
	return 0;
	
	
}
