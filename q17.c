#include<stdio.h>

int a;

int main() {
	printf("Enter a number: ");
	scanf("%d", &a);

	if ( a < 60) {
	printf ("F \n");

	}else if ( a < 70) {
	printf("D \n");

	}else if ( a < 80) {
	printf("C \n");

	}else if ( a < 90) {
	printf("B \n");
	}else {
	printf("A \n");
	}	

	return 0;
}
