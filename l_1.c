#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int shared = 8;
void *thread_increment(void *arg){
	shared++;
	printf("incremented shared gloabal variable is\n %d",shared);
}

void *thread_decrement(void *arg){
	shared--;
	printf("decremented shared gloabla variable is\n %d",shared);
}

int main(){
	pthread_t t1,t2;
	pthread_create(&t1,NULL,thread_increment,"hello");
	pthread_create(&t2,NULL,thread_decrement,"hello");
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	printf("shared gloabal variable now %d",shared);
	return 0;
}

