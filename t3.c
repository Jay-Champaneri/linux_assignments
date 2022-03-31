#include <stdio.h>
#include <pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void *init(){
    printf("you are in init function\n");
}

void *func(void *i){
    pthread_once(&once,(void *)init);
}

int main()
{
    pthread_t t[5];
    printf("Main function Starting!\n");
    for(int i=1;i<=5;i++){
        pthread_create(&t[i],NULL,(void *)func,i);
    }
    sleep(2);
    printf("Main function ended\n");
    pthread_exit(NULL);
    return 0;
}
