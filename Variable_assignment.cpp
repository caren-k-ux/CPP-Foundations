/*variable assignment is done using the = operator which is the assignment operator
/once the variable has been given a valuee, the value of that variable can 
be printed via the std::cout and the << operator  character output
By default, assignment copies the value on the right-hand side of the = operator to the variable on the
left-hand side of the operator. This is called copy-assignment.

*/

#include <iostream>

int main() 
{
    int width;                    //define a variable named width
    width = 5;                    //copy assignment value of 5  into variable

    // Variable initialization
    int height{5};                //define variable height and initialize with initial value 
    std::cout << "Height: " << height <<std::endl;//prints 5
    //Different form of  initialization

    int a;                        //default initialization(no initializer)

    //traditional initializaion forms;
    int b = 5;                     //copy initialization(initial valuee after equal sign)

    int c(6);                      //direct-intializaton(intial value in parenthesis)

    //Mordern initialization forms(Preferred):
    int d {7} ;                   //direct-list-initialization(intial value in braces)

    int e {};                     // value-initializaion(empty braces)


    
    std::cout <<width << std::endl;//prints 5

    width = 7;                     //changes the value stored in variable width to 7

    std::cout <<width << std::endl;//prints 7

    //the [[maybe_unused]] attribute
    //the following  program should not generate unused variable warnings or errors.
     [[maybe_unused]] double pi {3.14159}; //Don't complain if pi is unused
     [[maybe_unused]] double gravity {9.8};//Don't complain if  pi is unused
     [[maybe_unused]] double phi {1.61803}; //Don't complain if phi is umused
     std:: cout << pi<< '\n';
     std:: cout << phi << '\n';
     //The compiler will no longer warn about gravit being unused

    return 0;


}

//Variable intialization
/*
One of the downsides of assignment is that assigning a value to a just defined 
object requires two statements: one to define the variable, and another to assign the value.
The two steps can be combined.when an object is defined yo can optionally provide
an initial value to the object
the process of specifying the initial value for an object is called initialization
Initialization provides an initial value  to a variable at the point when it is created.
Assignment gives a variable a value at some point after the variable is created.
modern compilers generate warnings if a variable is initialized but not used
and if treat warnings as errors is enabled, these warnings will be promoted to errors and
cause compilation to fail
If a variavl is really unused and you don't need it, then the easiest option is to
remove the definition or comment it out Or use the variable somewhere else which could 
eventually be a downside of potentially changing your programs behhaviour
In some cases, neither of the above options are desirable. 
In that case we use the [[maybe_unused]] attribute, which allows us to tell the compilere
that we are olay with the variable being unused.
The compiler will not geerate unused variable warnings for such variables
*/