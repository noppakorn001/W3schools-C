#include <stdio.h>

int main(){
    int x = 10;
    int y = 3;

    printf("%d\n", x + y); // 13 //Addition
    printf("%d\n", x - y); // 7 //Subtraction
    printf("%d\n", x * y); // 30 //Multiplication
    printf("%d\n", x / y); // 3 //Division
    printf("%d\n", x % y); // 1 //Modulus

    int z = 5;
    ++z;
    printf("%d\n", z); // 6 //Increment
    --z;
    printf("%d\n", z); // 5 //Decrement


    int a = 10;
    int b = 3;
    printf("%d\n", a / b);   // Integer division, result is 3

    double c = 10.0;
    double d = 3.0;
    printf("%f\n", c / d);   // Decimal division, result is 3.333...
    return 0;
}