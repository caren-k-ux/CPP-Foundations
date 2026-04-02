#include <iostream>     //for std::cout

//definition of a user-defined function doPrint()
// doPrint() is the called function in this example

void doPrint()
{
    std::cout << "In doPrint()\n";
}

void doB() 
{
    std::cout << "In doB()\n";

}

void doA()
{
    std::cout << "Starting doA()\n";

    doB();

    std::cout << "Ending doA() \n";
}

//definition of function main()

int main() 
{

    std::cout << "Starting main()\n";

    doPrint();                         //Interrupt main() by making a function call to doPrint().main() is the caller.
    doPrint();                         //functions can be reused

    doA();

    std::cout << "Ending main()\n" ;  //This statement is executed after doPrint() ends

    // functions can call fuctions  that call other functions 
    //the main function can call other functions
    //The functions called by main can also call other functions
    //In this program main() calls doA() , which calls doB



    return 0;
}


//you should define your main() function at the bottom of your code file, below  other functions, and avoid calling it explicitly
//Your main function should return the value 0 if the program ran normally
//return o is known as the status code and is used to signal wether the program  was successful or  ot
//A value returning function is a function that returns a value
//A function is value returning if the return type is anythng other than void
//a value returning function must reurn a value of that type (using a return statement), otherwise an undefined behaviour will result


//Nested functions are not allowed in C++  a function cannot be in another function as in python

// most basic syntax to define a user-defined function

///returnType functionName() //This  is the function header (tells the compiler about the existence of a fuction)
//{} curly braces represent the funtion body


/*
A fumction is a reusable sequence of  of statements designed to do a particular job.
As we know every C++ code must have a main() function.
However as the program starts to get longer putting all the code inside the main()
functions becomes harder to manage
functions provide a way for us to split our programs into modular chunks that are easier to organizem test and use
functions you write yourself are called user-defined functions

*/