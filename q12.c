#include<stdio.h>

int main(){
	int a = 5, b = 3, res, res2;

	res = a + (b<<1);

	res2 = a+b*2;

	printf("Result using parenthesis: %d\n", res);
	printf("Result using arithmetic: %d\n", res2);
	return 0;
}
