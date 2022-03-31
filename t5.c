#include<stdio.h>
#include<pthread.h>

static pthread_spinlock_t lock;

int temp= 100;
void *i_thread(void *n){
	pthread_spin_lock(&lock);
	temp++;
	printf("value increment is %d\n",temp);
	pthread_spin_unlock(&lock);
	return NULL;
}

void *d_thread(void *n){
	pthread_spin_lock(&lock);
	temp--;
	printf("value after decrement is %d\n",temp);
	pthread_spin_unlock(&lock);
	return NULL;
}

int main(){
	pthread_t t1,t2;
	printf("initial value %d\n",temp);
	pthread_spin_init(&lock,PTHREAD_PROCESS_PRIVATE);
	pthread_create(&t1,NULL,i_thread,NULL);
	pthread_create(&t2,NULL,d_thread,NULL);
	pthread_exit(NULL);
}
