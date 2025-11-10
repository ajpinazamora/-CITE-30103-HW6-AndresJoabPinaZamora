#include<stdio.h>

int a, res, rem;

int main(){
	printf("Enter a number: ");
	scanf("%d", &a);

	if ( (a % 2 == 0) && (a % 3 == 0) && (a % 7 != 0) )
        printf("Number is divisible by both 2 and 3 but not by 7.\n");
    else
        printf("Number does not meet the condition.\n");

    return 0;
}
