/* To get user input, you can use the scanf() function */

#include <stdio.h>

int main() {
    int num;
    printf("Input number: ");

    /* Get and save the number the user types
    %d is used to get an integer value
    &num is the memory address of the variable 
    */

    scanf("%d", &num);

    printf("You entered: %d", num);
    return 0;
}

