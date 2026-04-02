#include <iostream>


//program that asks the user to enter an integer, waits for the input ,then tells them what 2 times the number is

int main() 
{
    std::cout << "Enter an integer: ";             

    int number{ };                         //define variable num as integer variable
    
    std::cin >>  number;                   //get integer value from user

    int doublenumber{ number * 2};        //define a new variable and intitialize it with num * 2

    std::cout << "Double that number is: "<< doublenumber << '\n';
    
    //This is the preffered solution as you only store the value once in the memory space
    std::cout << "Double " << number << " is " << number * 2 <<'\n';

    std::cout << "Tripple "<< number<<  " is: " << number * 3 << '\n';

    //program to enter two numbers and calculate their sum and difference.
    std::cout << "Enter  any  integer: ";

    int firstNumber {};

    std::cin >> firstNumber;

    std::cout << "Enter another integer: ";

    int secondNumber {};
    
    std::cin >> secondNumber;

    std::cout << firstNumber << " + " << secondNumber << " is " << firstNumber + secondNumber << ".\n";
    
    std::cout << firstNumber << " - " << secondNumber << " is " << firstNumber - secondNumber << ".\n";
    

    
    return 0;

}