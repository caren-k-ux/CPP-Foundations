/*numeric values are not quoted
values placed inside single-quotes are interpreted by the compiler as character values
values in double quotes are inter preted by the compiler as text values
values placed directly into the source code are called literals
C++ is staticl typed so the tpe of the object must be known at compile-time, and that type can not be changed without recompiling the program.
a datatype determines what kind of value an oject will store
Although the language allows you to do so, avoid defining multiple variables
of the same type in a single statement.
instead define each variable  in a separate statement on its own line
(then use a single line comment to document what it is used for)
*/


#include <iostream>       //for std::cout

int main() 
{
    //variable should be defined inside functions (such as within main())
    int x;                             //variable definition (define a variable named x of type int)
    int a, b;                          //Defining multiple variables
    //int a, int b;                    //This wiil result in a compile error

    //it is not recommended to  define variables of different type in the same statement
    int c; double d;                   //correct but not reccommended
    //int f, double v;                 //results in compile error

    int f;                             //This is 
    double g;                          //what is recommended
    std::cout << 5 << std::endl;       //print the literal number '5'
    std::cout << -6.7 << std::endl;    //print the literal number `-6.7`
    std::cout << 'H' << std::endl;     //print the literal character
    std::cout << "Hello" << std::endl; //print the literal text `Hello`

    return 0;

}

/*Literals are the easiest wa to provide values for your program, but they have some shortcomings
Literals are read-only values, so their value cannot be modified
thus if we want to  store data in memory we have to find some other way to do this
RAM stores values entered by the user, stores daa read in from a file or network and to store vallues calculated while the program is runnng
think of RAM as a series of numbered boxes that can be used to store data while the program is runing
In C++, direct memory access is discouraged.
Instead, we access memory indirectly through objects
An object is used to store a value in memory
A variable is an object that has a name(identifier)
A definition statement can be used to tell the compiler that we want to use a variable in our program
At runtime (when the program is loaded into memory and run), each object is given an actua
l storage location (such as RAM, or a CPU register) that it can use to store values. The process of reserving storage for an object’s use is called allocation. Once allocation has occurred, the object has been created and can be used.
An object is “created” once actual storage has been reserved for the object’s use.
At runtime (when the program is loaded into memory and run), each object is given an actual storage location (such as RAM, or a CPU register) that it can use to store values. The process of reserving storage for an object’s use is called allocation. Once allocation has occurred, the object has been created and can be used.
A data type determines what kind of values an object will store.

*/

