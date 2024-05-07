/////////////////////////////////contents//////////////////////////////////
/*
1. types of arithmatic Operator.
2. This arithmatic operations always follows BODMAS rule.
*/

#include <iostream>

int main()
{
    int count = 10;

    /////////////////Addition/////////////
    // count = count+2;  // >>>> 12
    // count+=2;   // >>>> 12
    // count++  // >>>> 11

    /////////////////Substracion/////////////
    // count = count-2;  // >>>> 8
    // count-=2;   // >>>> 8
    // count-- // >>>> 9

    /////////////////Multiplication/////////////
    // count = count*2;  // >>>> 20
    // count*=2;   // >>>> 20

    /////////////////Division/////////////
    // count = count/2;  // >>>> 5
    // count /= 2; // >>>> 5

    /////////////////Modulus/Remainder/////////////
    // count = count % 3; // >>>> 1
    // count %= 2; // >>>> 0

    std::cout << count << '\n';

    return 0;
}