#include <stdio.h>

int main(void){
	// need to manually allocate memory
	char name[20];
	printf("Hello, What is your name?\n");
	fgets(name,20,stdin);
	printf("Hello %s",name);
	return 0;
}
