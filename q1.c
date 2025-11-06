#include<stdio.h>

int main(){
	int a, b, area, per;

	printf("Enter base and hight of the rectangle: ");
	scanf("%d %d", &a, &b);

	area = a*b;
	per = 2*(a+b);

	printf("Area: %d\n", area);
	printf("Perimeter: %d\n", per);

	return 0;
}
