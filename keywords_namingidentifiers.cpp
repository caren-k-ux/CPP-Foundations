#include <iostream>

int main()
{
    std::cout <<"This is a really, really, really, really,"
                "really long line\n";//one extra indentation for continuation line
                //in case of a very long line this is whhat you should do ;
                //80 characters has been the defacto standard for the maximum length a line should be in C++, they can be longer though

    std::cout << "This is another really, really, really, really,really really,"
    "really long line\n";//this also works but it is cleaner to align he eext with the previous line for continuation
    
    std::cout << "This one is short\n";
    std::cout <<"This line has exactly  eighty characters in length well is this true  yes it is"<<'\n';

    //if a long line is split with an operator e.g << or +, the operator 
    //should be placed at the beginning of the next line no the end of the current line

    std::cout << 3 +  4
    + 5 + 6
    * 7 * 8;


}   


//It is best practice to keep your lines of code  80 chars or less in length
//Always make maximum use of whitespace to make sure your code is easier to read
//make it a habit to align values or comments by adding spacing between blocks of code
/*
Harder to read:
cost = 57; //cost price
pricePerItem = 24; //these comments are harder to read
value = 5; //value bla bla bla
numberOfItems = 17; //especially if the lines are of different lengthe

Easier to read:
cost          = 57;        //cost price
pricePerItem  = 24;        //These comments make the code easier to read
value         = 5;         //value bla bla bla
numberOfItems = 17;        //especially when the lines are of different lengths     
*/
















// keywords are simply reserved words and cannot be used as variable names
//identifiers are names of a variable, function, type, or any other type of item
/*
identifier naming rules
1. cannot ve a keyword
2.can only be composed of leters(lower or uppercase), numbers, and the underscore
ths means the name cannot contain symbols nor whitespaces
3.must begin with a letter(lower or upper case) or an underscore.
 Cannot start with a number
4.C++ is case sensitive, and thus distinguishes between lower and uppercase letters.

Identifier naming best practices

1.It is conventianal in C++ that variable names should begin with a lowercase letter.
if it is a single word or acronymn, the whole thing should be in lowercase letters.
int value; //convenional
int Value; //unconventional (should start with lowercase leetters)
int VALUE; //unconventional (should  start with lower case letter and be all lowercase)
int VaLuE; //see a psychiatrist;

if a variable or funcion name is  multiword there are two common conventions: 
words separated by underscores(sometimes called snakecase),
intercapped(sometimes called camelCase, since the caps stick up like the humps of a camel).
int my_variable_name; //conventional(snake_case, separated by underscores)
int my_function_name(); //conventional

int myVariableName; //conventional(intercapped/camelCase)
int myFunctionName(); //conventional

int my variable name; //invalid (whitespaces not allowed)
int my function name();//whitespaces not allowed

int MyVariableName; //unconventional (should start with lowercase letters)
int MyFunctionName(); //unconventional (same reason)

2.Avoid naming your identifiers starting with an underscore.Although syntactically 
legal, these names are typically reserved for OS, library, and/or compiler use.

3.The name of  your identifiers should make clear what the value they are holding 
means.should be made in a way that in 3 months, when you look at  your program again, you;ll  
have forgotten how it works you will thank yourself for  picking variable names that make sense

4.Avoid abbreviations(num,Idx)
code is written more than it is written
5.For variable declarations, it can be useful to use comment to 

*/