/* fix limit of characters by fgets */
/* limit of scanf() is space */

#include <stdio.h>

int main() {
    char fullName[30];

    printf("Type your full name: \n");

    // get string with spaces
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);
    return 0;
}