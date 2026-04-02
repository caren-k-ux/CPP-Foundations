//A function paremeter is a vairiable used in the header of the function.
//function parameters work almost identically to  variables defined inside the function, but with one difference: they are intialixed with a value provided by the caller of the function
//function paramenters are defined in the function header; multiple parameters being separated by commas
//An argument is  a value that is passed from the caller to the function when a function call is made:

#include <iostream>


//This function takes no parameters
//It does not rely on the caller for anythong
void doPrint()
{
    std::cout << "In doprint()\n";
}

//This function takes one integer parameter named x
//The caller will supply the value of x

void printValue(int x) 
{
    std::cout << x << '\n';
}
//A variable has a lifetime between its creation and destruction in a local scope
//The variable in the void function is created  when declared  as a parameter and destroyed
// at the end of the curly brackets at the end of the function that is why we can redeclare  the x in another function the int add function since it is destroyed after the curly brackets

//This functon has two integer parameters, one named x, and one named y
//The caller will supply the value of both x and y

int add(int x, int y)
{
    return x + y;
}

int multiply(int x, int y)
{
    return  x * y ;
}


int main () 
{
    doPrint(); //This  call has nor arguments
    printValue(4);
    int product{multiply(9,7)};
    int sum{add(6,7)};
    int a{8};
    int b{9};
    std::cout << "The sum of " << a << " and " << b << " is " << add(a, b) << "\n";

    std::cout << "The product of 9 and  7 is " << product << '\n';
    std::cout << add(product, sum) << '\n';
    std::cout << sum << '\n';
    std::cout << multiply(add(10,9), 4) << '\n';
    std::cout << add(2, multiply(4,5)) << std::endl;

    return 0;
}