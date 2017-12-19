#include <iostream>
#include "stats.hpp"

using namespace std;
int main(int argc, char* argv[])
{
    cout << "This is my first attempt in this project." << endl;

    Stats s1; //create object
    Stats s2(20); //create object

    cout << s1.get() << endl;
    cout << s2.get() << endl;
    s1.set(15);
    cout << s1.get() << endl;

    return 0;
}
