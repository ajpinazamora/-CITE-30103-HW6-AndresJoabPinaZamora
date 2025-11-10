#include<stdio.h>

int n, result;

int main(){

	printf("Enter a number: ");
	scanf("%d", &n);

	int i = 1;

	while( i <= n){
		if (n == 0){
			result = 0;
	
		}else{
			result = result + i;;
			i++;
		}
	}
	printf("The sum from 1 to n is: %d\n", result);
	return 0;
}
