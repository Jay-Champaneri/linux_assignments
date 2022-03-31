#include <pthread.h>
#include <stdio.h>

void* func(void* arg){
    sleep(3);
    return 0;
}

int main(){
    pthread_attr_t Attr;
    pthread_t id;
    struct sched_param p;
    int *s;

    pthread_attr_init(&Attr);
    pthread_attr_getschedpolicy(&Attr,&s);
    pthread_attr_getschedparam(&Attr,&p);
    printf("Default Scheduler behavior is %d and the Priority is is %d\n",s,p.sched_priority);
    s=2;
    p.sched_priority=20;


    pthread_attr_setschedpolicy(&Attr,s);
    pthread_attr_setschedparam(&Attr,&p);
    
    pthread_create(&id,&Attr,func,NULL);

    pthread_attr_getschedparam(&Attr,&p);
    pthread_attr_getschedpolicy(&Attr,&s);
    printf("New Scheduler behavior is %ld and Priority is %ld\n",s,p.sched_priority);
    return 0;
}
