#include<stdio.h>

int global = 7;

int main(){
	int local = 8;

	printf("This is the global variable: %d\n", global);
	printf("This is the local variable: %d\n", local);
	
	return 0;
}
