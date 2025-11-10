#include<stdio.h>

int main() {
    int n, count = 0;

    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &n);

        if (n != 0)
           count++; 

    } while (n != 0);

    printf("You entered %d numbers.\n", count);

    return 0;
}
