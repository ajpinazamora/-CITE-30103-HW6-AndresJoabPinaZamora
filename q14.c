#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    // Using nested conditional operator
    (a > 0) ? printf("The number is positive\n") :
    (a < 0) ? printf("The number is negative\n") :
              printf("The number is zero\n");

    return 0;
}
