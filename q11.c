#include<stdio.h>
int a, b, sum, sub, mult, div, rem;

int main(){
	
	printf("Enter to numbers: ");
	scanf("%d %d", &a, &b);

	sum = a+b;
	sub = a-b;
	mult = a*b;
	div = a/b;
	rem = a%b;

	printf("Addition: %d\n", sum);
	printf("Subtraction: %d\n", sub);
	printf("Multiplication: %d\n", mult);
	printf("Division: %d\n", div);
	printf("Remainder: %d\n", rem);

	return 0;
}
