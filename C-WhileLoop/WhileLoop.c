/*
syntax

while (condition){
    // code block to be excuted
}

*/

#include <stdio.h>

int main(){
    int i = 0;
    while (i<=5)  // first check the condition
    {
        printf("%d\n", i); // then excute the code block
        i++;
    }
    return 0;
}