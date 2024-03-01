/////////////////////////////////contents//////////////////////////////////
/*
1. creating aliases
*/

#include <iostream>
#include <vector> // to create an alias we need the <vector> library.

/*
There are two methods we can create an alias:
'typedef' [deprecated- by devolopers]
'using' [more popular]
*/

// 'typedef -->  typedef <the original keywords> <user defined alias> ;
// typedef std::string str;
// typedef int num;

// 'using' --> using <used defined alias> = <actual keyword>
using str = std::string;

int main()
{
    str idk = "idk";
    std::cout << idk << '\n';
    return 0;
}