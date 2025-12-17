// To access it, use the reference operator (&), and the result represents where the variable is stored

/* 
Note: The memory address is in hexadecimal form (0x..). You will probably not get the same result in your program, as this depends on where the variable is stored on your computer.
*/

#include <stdio.h>

int main() {
    int myAge = 43;

    // %p is a pointer
    printf("%p", &myAge); // Outputs 0x7ffe5367e044
    printf("\n");

    // %d is an integer
    printf("%d", &myAge);

    /*
    %p (Pointer): Designed specifically to display addresses. It displays them as hexadecimal, usually starting with 0x.
    %d (Integer): Designed to display numbers as decimal.
    */
    return 0;
}