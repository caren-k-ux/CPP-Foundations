//A literal is a fixed value that has been inserted directly into the source code.
// variable and objects represent memory locations that hold values.These values can be fetched on demand
//operation is the process involving zero or more input values called operands that produces a new value called an output value

#include <iostream>

int main()
{
    std::cout 
    <<"Hello World!\n";     //Hello World! is a literal

    std::cout
    << 5 << '\n';         //print  the value of  a literal

    int  x {5};
    std::cout
    << x << '\n';         //print the value of a variable

    //In C++, operator work as you'd expect
    std::cout
    << 1 + 2 << '\n';
    
    std::cout 
    << (x = 5) <<'\n';
    

    std::cout
    << 4 <<'\n';

    //syntax for expression
    //type identifier {expression};

    int b {2 + 3};
    std::cout << b << '\n';

    int d {b};
    std::cout << d << '\n';

    // int e {five()};           //intialize variable e with retrn value 5

    return 0;



}

// some standard arithimetic operators in C++ include addition(+), subtraction(-),
// multiplication(*), division(/)