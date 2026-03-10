#include <stdio.h>

int main(){
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin); //AND
    printf("Has access: %d\n", isLoggedIn || isAdmin); //OR
    printf("Not logged in: %d\n", !isLoggedIn); //NOT
    
    return 0;
}