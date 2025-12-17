#include <stdio.h>

int main() {
    int num;
    char text;
    printf("Input number and character: ");

    //scanf() can take multiple inputs
    scanf("%d %c", &num, &text);
    
    printf("You entered: %d %c", num, text);
    return 0;
}