/* can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point */

#include <stdio.h>
int main() {
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits

    double myDoubleNum = 19.99;
    // only show 0 digits after the decimal point that is why it will show 20
    printf("%.0lf\n", myDoubleNum);
    return 0;
}