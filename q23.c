#include <stdio.h>

int main() {
    int n;
    int pos = 0, neg = 0, even = 0, odd = 0;

    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &n);

        if (n != 0) {
            if (n > 0)
                pos++;
            else
                neg++;

            if (n % 2 == 0)
                even++;
            else
                odd++;
        }

    } while (n != 0);

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

