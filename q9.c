#include<stdio.h>

int a = 7, b = 2;
float imp, ex;

int main() {
	imp = a/b;
	ex = (float)a/b;
	
	printf("Integer division: %d / %d = %d\n", a, b, a / b);
	printf("Implicit casting: %.2f\n", imp);
	printf("Explicit casting: %.2f\n", ex);

	return 0;
}
