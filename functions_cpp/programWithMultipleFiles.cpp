/*
REFERENCE: MULTIPLE FILES WITH HEADERGUARDS(THE HASHTAGS)

Concept: SQL "IG NOT EXISTS" for cpp
LEARNING NOTE: HOW TO STRUCTURE MULTIPLE FILES
----------------------------------------------
To run a project like this, you MUST compile both .cpp files:
Terminal: g++ main.cpp input.cpp -o my_program
*/

//--FILE 1: input.h(The Header/Contract)---

/*
#ifndef INPUT_H      //IF NOT DEFINED: Is the bridge clear?
#define INPUT_H      //Define : Iam stepping on the bridge!

//This is just a "Foward Declaration"
//It tells main.cpp"A function named getInteger exists elsewhere"
int getInteger();
#endif              //ENDIF: Bridge is clear for the next file
*/


//---FILE 2: input.cpp(The Implementation) ---
/*
#include <iostream>
#include "input.h"                //Links to our "Bridge rules"
int getInteger()
{
    std::cout <<"Enter an integer: ";
    int x{0};
    std::cin >> x;
    return x;

}
*/

//FILE 3: main.cpp(The entry point)---
/*
#include <iostream>
#include "input.h"                        //Lets main see the bridge rules

int main()
{
    int value{getInteger()};
    std::cout <<"Result: " << value << "\n";
    return 0;
}
*/

//PRO-TIP: The Header(.h) is the "Glue" that lets main.cpp see input.cpp
//For more information