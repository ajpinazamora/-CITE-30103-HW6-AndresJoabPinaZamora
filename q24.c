#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 50; i++) {

        if (i % 5 == 0)
            continue;

        if (i == 40)
            break;

        printf("%d\n", i);
        count++;
    }

    printf("Numbers displayed: %d\n", count);

    return 0;
}

