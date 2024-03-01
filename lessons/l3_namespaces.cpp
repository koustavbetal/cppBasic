/////////////////////////////////contents//////////////////////////////////
/*
1. types of namespaces
2. how to use namespaces
*/

#include <iostream>
// using namespace std; // Although this line is widely used, this is apparently a noob practice
/*
what this does is wherever we needed to write "std:: ___ " (ie: std::cout or std::string) we can simply omit that,
we can instead say like, cout or string etc.
*/

// we can also create our own custom namespaces,
/*
where is this used: as we can not re-declare a variable with same name, either we have to use separate name, or we can use separate namespaces
*/

namespace first
{
    int x = 25;
} // namespace first
namespace second
{
    int x = 2;
} // namespace second

int main()
{
    int x = 99;

    // std::cout << first::x << '\n';   // >>>> 25
    // std::cout << second::x << '\n';  // >>>> 2
    std::cout << x << '\n'; // >>>> 99

    /*
    if we have used the 'using namespace std' the statements would have looked like:

    cout << first::x << '\n';   // >>>> 25
    cout << second::x << '\n';  // >>>> 2
    cout << x << '\n';          // >>>> 99
    */

    return 0;
}