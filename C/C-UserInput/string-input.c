#include <stdio.h>

int main() {
    char text[100];
    printf("Input text:" );

    // use string(%s) with scanf() 
    scanf("%s", &text);

    printf("You entered: %s", text);
    return 0;
}