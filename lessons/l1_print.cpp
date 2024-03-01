/////////////////////////////////contents//////////////////////////////////
/*
1. Print statement and types to create a next line
2. 2 types of comments
*/

// Include all the Header files here
#include <iostream> //the header file for the basic input and output processes.

// Here the main function is returning an Integer variable
int main()
{

    std::cout << "its kobe\n";                                 //"\n" is used to state tell the compiler to a next line (1)
    std::cout << "My full name is Koustav Betal" << std::endl; // << std::endl it is used also to tell the compiler to end the line. (2)

    /*
    Main difference between bothe of these statements is that \n do not release the buffer, hence its slightly consumps more memory.
    on the other hand << std::endl delete the whole buffer, hence low less memory consumption.
    one more format
    is there to go to the next line, <<'\n', it'll do the samee as (1)
    */

    return 0; // no necessary until its a big database, 0 -> exited the the program with 0 err, anything other than 0 -> thre is an err.
}