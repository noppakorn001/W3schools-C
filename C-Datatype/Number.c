#include <stdio.h>

int main() {

    // number without demicals
    int myint = 5;
    printf("%d\n", myint);

    // number with demicals
    float myfloat = 5.5;
    printf("%f\n", myfloat);

    // number with demicals and 2 decimal places
    double mydouble = 5.555;
    printf("%f\n", mydouble);

    /*
    The precision of float is six or seven decimal digits
    The precision of double is 15 decimal digits
    */

    // scientific numbers
    float f1 = 35e3;   // 35 * 10^3 = 35000
    double d1 = 12E4;  // 12 * 10^4 = 120000

    printf("%f\n", f1);
    printf("%lf", d1);

    return 0;
}