#include <stdio.h>

int main() {
    char c;
    int i;
    long int l;
    float f;
    double d;

    printf("Size of char variable: %lu bytes\n", sizeof(c));
    printf("Size of int variable: %lu bytes\n", sizeof(i));
    printf("Size of long int variable: %lu bytes\n", sizeof(l));
    printf("Size of float variable: %lu bytes\n", sizeof(f));
    printf("Size of double variable: %lu bytes\n", sizeof(d));

    return 0;
}
