#include<stdio.h>
#include<pthread.h>
#include<string.h>

struct book
{
    int id;
    char author[50];
};

void *display(void *arg)
{
    struct book *b = (struct book *)arg;
    printf("id is %d and  author name is %s\n", b->id,b->author);
    return NULL;
}

void main()
{
    int id,n;
    printf("Enter a number ");
    scanf("%d",&n);
    pthread_t tid[n];
    char author[50];
    struct book T[n];

    for(int i=0;i<n;i++){
        printf("Enter id ");
        scanf("%d",&id);
        T[i].id = id;

        printf("Enter Name ");
        scanf("%s",name);
        strcpy(T[i].name,name);
    }
    for(int i=0;i<n;i++)
        pthread_create(&tid[i], NULL,(void *)display, &T[i]);
    pthread_exit(NULL);
    return 0;
}
