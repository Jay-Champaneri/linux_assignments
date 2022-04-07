#include<stdio.h>
#include<sting.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<unistd.h>

int main(){
	int qid;
	struct msqid_ds buf;
	qid = msgget(55,IPC_CREAT|0644);
	msgctl(qid,IPC_STAT,&buf);
	printf("no of msgs %hi\n",buf.msg_qnum);
	printf("max no of bytes in q %hi\n",buf.msg_qbytes);
	msgctl(qid,IPC_RMID,&buf);
	return 0;
}
