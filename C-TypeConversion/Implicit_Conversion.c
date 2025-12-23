#include <stdio.h>

int main() {
    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f", myFloat); // 9.000000

    printf("\n");

    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("%d", myInt); // 9

    return 0;
}