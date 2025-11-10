#include<stdio.h>

int a;

int main() {
	printf("Enter a number: ");;
	scanf("%d", &a);

	if ( a < 0) {
	printf("The number is negative \n");

	}else if ( a == 0) {
	printf("Number is zero \n");

	}else {
	printf("Number is positive \n");
	}

	return 0;
}

