#include <stdio.h>

int main()
{
    // Create variables
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%.2f\n", myFloatNum);
    printf("%c\n", myLetter);

    // The char Type
    char myGrade = 'A';
    printf("My grade is: %c\n", myGrade);

    //Tip: A list of all ASCII values can be found in the ASCII table.
    // เลข แทนด้วย อักษร ใน ASCII
    char a = 65, b = 66, c = 67;
    printf("%c", a);
    printf("%c", b);
    printf("%c \n", c);


    /*
    จะได้แค่ text ตัวสุดท้าย
    char myText = 'Hello';
    printf("%c", myText);

    Note: Don't use the char type for storing multiple characters, as it may produce errors.
    */

    //To store multiple characters (or whole words), use strings
    char myText[] = "Hello"; // เพิ่ม [] เพื่อบอกว่ามีหลายตัวอักษร
    printf("%s \n", myText);

    //Numeric Types
    printf("Numeric Types: \n");
    //Use int when you need to store a whole number without decimals
    
    int myInt = 1000;
    printf("%d \n", myInt);

    float myFloat = 5.75;
    printf("%f \n", myFloat); // ทศนิยม 6 ตำแหน่ง

    double myDouble = 19.99;
    printf("%.15lf\n", myDouble); // ทศนิยม 15 ตำแหน่ง

    return 0;
}