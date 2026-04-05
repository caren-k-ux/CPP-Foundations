#include <iostream>

//Using forward declaration as a forward declaration for funcrion add
//function declarations do not need to specify the names of the parameters(as they are not considered part of the function declaration).
//In the code below you can forward declare your function like this:
//int add(int, int);  //valid forward declaration
// although it is preferred and advisable to include them

int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';        //this works because we forward declared add() above


}

int add(int x , int y)                                                   //even though the body of add() isn't defined until here
{
    return x + y;
}

//Declarations vs. definitions
//A declaration tells the compiler about the existence of an identifier and its associated type information.
//Here are some examples of declarations
int multiply(int a , int b);     //tells the compiler about a function named multiply that takes two int parameters and returns an int. NO body

int x;                           //tells the compiler about an integer variaable named x

// A definition is a declaration that actually implements(for funtions and types) or instatiates(for variables) the identifier
//because this function ha a body, it is an implementation of the function multipy
int multiply(int a, int b)
{
    int z{ a * b};  //instantiates variable z

    return z;
}

int b;              //instatiates the variable x

// all defiitions are declarations, therefore int b is both a definition and a declaration
//Declarations that aren't definitions are called pure declarations
//pure declareations include forward declarations for function, variables, and types.
/*
int main() 
{
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n';
    return 0;
}

int add(int x, int y)

{
    return  x + y;
}
/*
This looks like a seemingly innocent program
you would expect this program to produce the result:
The sum of 3 and 4 is: 7
But it does infact not compile at all! The reason this program does not compile is because the compiler compiles the content of the code files sequentially
It will result in a compilation errors
BEST PRACTICE:
When addressing compilation errors or warnings in your programs, resolve the first issue listed and then compile them again
To fix this problem, we need to adress the fact that the compiler does not know whar add is.
There are two common ways to adress the issue
*/

// OPTION 1:Reorder the function definitions

/*
int add(int x, int y) 
{
    return x + y;
}

int main()
{
    std::cout << "The sum of 3 and  4 is: "<< add(3, 4) << '\n';
    return 0;
}
*/
// That way by the time main calls add, the compiler will already know what add is.
// because this is a simple program, this  change is relatively easy to do.However in a larger program, it can be tedious trying to figure out which functions call which other functions (and in what order) so they can be declared sequentially.
// Option2:using forward declaration
// A forward declaration allows us to tell the compiler about the existence of an identifier before actually defining the identifier
// In the case of functions, this allows us to tell the compiler about the existence of a function before we define  the function's body
// This way, when the compiler encounters the call to the function, it will understand that making a function call, and check to ensure we are clling the function correctly, even if it doesn't yet know how or where the function is defined
// To write a foward declaration for a function we use a function  declaration statement(also called a function prototype)
// The function declaration consists of the function's return type, name, and parameter types, terminated with a semicolon. The name of the parameters can be optionally included.
// The function body is not included in the declaration
//Here's a function declaration for the add function:
//int add(int x, int y); //function declaration includes return type, name, parameters, and a semicolon. No function body!
//REFER TO  input.cpp, main.cpp, input.h
