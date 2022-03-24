#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int main(){
	size_t s_size;
	pthread_attr_t attr;
	pthread_attr_getstacksize(&attr,&s_size);
	printf("stack size is %d\n",s_size);
	pthread_attr_setstacksize(&attr,800000000);
	pthread_attr_getstacksize(&attr,&s_size);
	printf("changed stack size is %d\n",s_size);
	return 0;
}
