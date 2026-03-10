// This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

/*
    do {
        // code block to be executed
    }
    while (condition);
*/

#include <stdio.h>

int main(){
    int i=0;
    do{
        printf("%d\n", i);
        i++;
    }
    while (i<=5); 
    return 0;
}