#include<stdio.h>
#include<pthread.h>


void *t_func(void *n){
    int id = (int *) n;
    printf("Thread has started %d\n",id);
}
int main()
{
    printf("function has started\n");
    pthread_t t[5];

    for(int i=1;i<=5;i++){
        pthread_create(&t[i],NULL,(void *)t_func,i);
    }
    printf("function has completed\n");
    pthread_exit(NULL);
    return 0;
}
