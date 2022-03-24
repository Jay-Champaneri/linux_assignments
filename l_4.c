#include<pthread.h>
#include<stdio.h>

pthread_t tid;
pthread_t thread_id;
int pid;

void* thread_function(void *arg)
{
	printf("thread is executing here\n");
	return NULL;

}
int main(void)
{
	int ret = pthread_create(&tid,NULL,thread_function,NULL);
	thread_id = pthread_self();
	pid = getpid();
	printf("New thread is created succesfully\n");
	printf("Thread id is : %u",thread_id);
	printf("process pid is : %d",pid);
	pthread_join(tid,NULL);
	return 0;
}
