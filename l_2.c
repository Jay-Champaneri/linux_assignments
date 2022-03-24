#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *thread(void *ptr){
	printf("thread has been initialized\n");
	printf("thread is cancelled\n");
	pthread_cancel(pthread_self());
	return NULL;
}

int main(){
	pthread_t t;
	pthread_create(&t,NULL,thread,"jay");
	pthread_join(t,NULL);
	return 0;
}

