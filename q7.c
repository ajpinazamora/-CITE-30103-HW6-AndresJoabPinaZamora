#include <stdio.h>

// Using #define (preprocessor constant)
#define PI1 3.1416

int main() {
    float radius, area1, circ1;
    const float PI2 = 3.1416;   // Using const keyword (typed constant)
    float area2, circ2;

    printf("Enter radius: ");
    scanf("%f", &radius);

    // Using #define PI1
    area1 = PI1 * radius * radius;
    circ1 = 2 * PI1 * radius;

    // Using const PI2
    area2 = PI2 * radius * radius;
    circ2 = 2 * PI2 * radius;

    printf("\nUsing #define:\n");
    printf("Area = %.2f\n", area1);
    printf("Circumference = %.2f\n", circ1);

    printf("\nUsing const:\n");
    printf("Area = %.2f\n", area2);
    printf("Circumference = %.2f\n", circ2);

    return 0;
}
