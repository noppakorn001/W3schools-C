/*
Data Type   	Size
    int         2 or 4 bytes
    float       4 bytes
    double      8 bytes
    char        1 byte
*/
#include <stdio.h>
int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    // %zu is used to print the size of the data type
    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));

    return 0;
}