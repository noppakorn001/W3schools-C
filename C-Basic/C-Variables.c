/*
int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
*/
// To create a variable, specify the type and assign it a value:

// type variableName = value;

#include <stdio.h>

int main(void)
{
    int myNum = 15;
    float myFloat = 15.99f;
    char myChar = 'X';

    // Print variables
    printf("%d\n", myNum);     // พิมพ์ int
    printf("%.1f\n", myFloat); // พิมพ์ float (ทศนิยม 1 ตำแหน่ง)
    printf("%c\n", myChar);    // พิมพ์ char
    printf("My number is %d and my letter is %c", myNum, myChar);
    printf("\n My favorite number is: %d", 17); // 17 มาแทน 15

    // overwrite
    myNum = 20; // now myNum is 20
    printf("\n My new number is: %d", myNum);

    int myOtherNum = 40;
    myNum = myOtherNum; // myNum is now 40, instead of 20
    printf("\n My newer number is: %d", myNum);

    // copy value to empty
    int emptyNum;     // empty variable
    emptyNum = myNum; // now emptyNum is 40
    printf("\n My empty number is: %d", emptyNum);

    // Add Variables Together
    int sum = myNum + myOtherNum; // sum is now 80
    printf("\n The sum of myNum and myOtherNum is: %d \n", sum);

    // Declare Multiple Variables
    int x = 5, y = 15, z = 25;
    printf("Multiple sum is: %d", x + y + z);

    // assign the same value to multiple variables of the same type
    x = y = z = 50; // x, y, and z are all 50 now
    printf("\n Multiple same value sum is: %d", x + y + z);

    // Variable Names
    int minutesPerHour = 60; // explain
    int m = 60;              // less explain

    // Real-Life Example
    //  Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);

    // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length * width;

    // Print the variables
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d", area);

    // end the function
    return 0;
}
