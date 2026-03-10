#include <stdio.h>

int main(){
    int x = 5;
    int y = 3;

    printf("%d\n", x == y); // 0 (false)
    printf("%d\n", x != y); // 1 (true)
    printf("%d\n", x > y);  // 1 (true)
    printf("%d\n", x < y);  // 0 (false)
    printf("%d\n", x >= y); // 1 (true)
    printf("%d\n", x <= y); // 0 (false)
    
    return 0;
}