#include <iostream>                            //for std::cout, std::endl
//rest of the code that uses iostream functionality under here

int main()
{
    std::cout <<"Hello world!\n";
    //<< this is the insertion operator to send the text Hello world! to the console to be printed

    std::cout <<"Yep" << "\n"; 
                     //double quoted (by itself) (unconvectional bu olay)
    std::cout << 4<<'\n';
    //cout can also be used to print the value of variables

    int x {5};
    std::cout << "x is equal to: " << x << '\n'; //it is advisable to use \n when moving to a newline instead of endl for speed

    std::cout <<"Hi!" <<std::endl;               //std::endl will cause the cursor to move to the next line
    std::cout <<"My name is Khakasa." << std::endl;
    //Prefer \n over std::endl when outputting tet to the console.

    std::cout <<"Enter a number: \n";            //ask the user for a number
    int w{};                                     //define  varisble w to hold the user input(and value-initialize it)
    std::cin >> w;                               //get number from the keyboard and store it invariable w

    //You don't need to output '\n' when accepting a line of input, as the user will need to press the enter key to have their input accepthed

    std::cout <<"You entered " << w << '\n';
    //just as you can output more than one bit of text in a single line, it is also possible to input more than one value in a single line

    std::cout << "Enter two number separated by a space: " ;
    int v{};   
    int y{};
    std::cin >> v >> y;                          //get two numbers and store in variable v and y respectively

    std::cout << "You entered " << v << " and " << y << '\n';//std::cin is a buffer refer to lesson 1.5 of learncpp,com
    return 0;
}






/*
The input/output library
is part of the c++ standard library that deals with basic input and output
The io part of iostream stand for input/output
To use the functionality defined within the iostream library, we need to 
include the iostream header at the top of any code file that uses the content defined  in iostream

std::cout
The iostream library contains a  few predefined variables for us to use
std::cout, one of the most useful allows us to send data to the console to be printed as text
cout stands for "character output".

std::endl
use to print separate line of output on the console.
one way to output a newline is to output std::endl(which stands for "endline"):
endl is often inefficient, as it actually does two jobs: it outputs a newlint(moving the cursor to the next line of the console),
and it flushes the buffer which is slow
If we output multiple lines of text ending with std::endl, we get multiple flushes,
which is slow and probably unnecessary as C++'s ouypuy system is designed to self-flush periodically and its boyhe simpler and efficient to let it flush itself.
To output a newline without flushing the output buffer,
we use \n(inside either single or double quotes) which is a  special symbol that that the compiler interprets as a newline character
it is typically better in terms of performance and faster.

std::cin
std::cin(which stands for "character input") reads the input from the keyboard
we typically use the extraction operator >> to put the input data in a variable (which can then be used in subsequent statements)
std::cin is buffered because it allows us to separte the entering of input from the extract of input.
we can wner the input once and then perform multiple extraction request on it


*/