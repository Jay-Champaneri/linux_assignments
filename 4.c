#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int fd,fd1,len;
	char rb[50]="okay";
	
	fd = creat("q41.txt",777);
	fd1 = open("q42.txt",O_CREAT|O_RDONLY,777);
	len = read(fd1,rb,50);
	printf("data is =%s\n",rb);
	
	len = write(fd,rb,50);
	printf("data to new file");
	lseek(fd1,0,SEEK_SET);
	read(fd1,rb,50);
	printf("data here=%s",rb);
	
	close(fd);
	close(fd1);
	return 0;
}
