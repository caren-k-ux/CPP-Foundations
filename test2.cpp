#include <iostream>  // for std::cout and std::cin
//Asks the user to enter three separate  values and  proving that std::cin acts as a buffer.
int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    std::cout <<"Enter three numbers: ";
    int w{};
    int y{};
    int z{};
    int p{};
    std::cin >> w >> y >> z >> p;
    //"\n" should be in double quotes since we are outputting more than one character.
    std::cout <<"You entered " << w <<", "<< y <<", and  "<< z <<".\n";

    int k ;
    

    std::cout << k << '\n';



    return 0;
}

/*

when you enter a letter instead of an integer the result will 
always result into a 0
This is because  an integer can't hold a letter, so extraction completely fails
X us assigned to the value 0
when you put a decimal the decimal part will be dropped say 3.2456 it will return
3
It is only disallowed in the case of  list-intialization where it returns an error
i.e cout << int x{3.2}; will return an error as 3.2 is not an integer

If you enter text it will return 0 for the same reason as entering a letter.

if you enter a a really big number (at least 3 billion).
It will most likely result to  the umber 2147483647 which is lthe largest value 
a variable x or any other can hold

A small number followed by letters, such as 123abc  it wil return 123 and drop the abc
in the case of abc123 it will result into a 0
in case of something like 5b9 5 wil be printed

*/