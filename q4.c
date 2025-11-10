#include <stdio.h>

int main(void) {

	int a = 5, b = 10;
	float avg = (a + b) / 2.0; // Use 2.0 to force floating-point division
	printf("Average = %.2f\n", avg);
	return 0;

}
