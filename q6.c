#include<stdio.h>
#include<stdlib.h>

void display_first(){
	printf("it will be called last");
}
void display_second(){
	printf("it will be called second lasst");
}
void display_third(){
	printf("it will be called first");
}

int main(){
	atexit(display_first);
	atexit(display_second);
	atexit(display_third);
	return 0;
}
