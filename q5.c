#include <stdio.h>

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n); // Use &n to pass the address of n
	printf("You entered %d\n", n);
	return 0;
}
