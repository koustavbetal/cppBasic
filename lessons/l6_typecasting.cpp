/////////////////////////////////contents//////////////////////////////////
/*
1. Implicit typecasting.
2. Explicit Typecasting.
*/

#include <iostream>
using namespace std;

int main()
{
    /////////////////Implicit/////////////
    // assigning the type upon declaration..
    // int num = 3.14;  //even though the number is float, the answer will be 3; as it is declared as an integer.

    /////////////////Explicit/////////////
    // changing or casting the type as per convinience, in the middle of the code
    int n1 = 50;
    int n2 = 3;
    // cout << n1 / n2 << '\n'; // >> 16 (but it should have been 16.667; it is not due to both being int)
    cout << n1 / (float)n2 << "\n"; // >> now it returns the output as 16.667
    cout << "vhgv_ddvg_dgd";

    return 0;
}