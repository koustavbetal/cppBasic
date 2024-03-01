/////////////////////////////////contents//////////////////////////////////
/*
1. All kinds of variables
*/

#include <iostream>
using namespace std;

int main()
{
    ///////////////////////////////declarad////////////////////////////////
    int x, age; // we can declare multiple variable in a single line
    double price;
    char ctr;
    bool state;

    // once declared you cannot use the keywords again, as it will be seen as you want create a new variable, which will create confict.. thus error
    //  Although you can just use these variable like
    x = 24; // this is valid but "int x = 24; " after line 7... this is wrong.

    /////////////////////////////initialized////////////////////////////////
    // int-eger (whole numbers only)
    int y = 5;
    int num = 21;

    // double [not float] (fractional/floating point/decimal numbers)
    double data = 25.3;

    // char (single charecter only) [Always wrap it in a 'quote']
    char chr = 'a';

    // bool-ean (true or flase)
    bool status = true;

    // string (set/sequence of charecters)  [Always wrap it in a 'quote']
    std::string name = "koustav";

    // const-ant, this essentially creates a read-only variable
    const double PI = 3.14; // UPPERCASE is the the convention to denote a constant variable

    // Print Statement
    std::cout << name << data << chr << '\n'; // For debug, nothing fancy, although (,) isn't used here to concatinate.

    return 0;
}