/*
Order of Operations
Here are some common operators in C, from highest to lowest priority:

() - Parentheses
*, /, % - Multiplication, Division, Modulus
+, - - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment
*/

#include <stdio.h>

int main(){
    int result1 = 10 - 2 + 5;    // (10 - 2) + 5 = 13
    int result2 = 10 - (2 + 5);  // 10 - 7 = 3

    printf("%d\n", result1);
    printf("%d\n", result2);
    
    return 0;
}