#include <iostream>

//Program showing how to use return values as arguments

int getValueFromUser() 
{
    std::cout << "Enter an integer: ";
    int input{0} ;
    std::cin >> input;
    return input;
}

void getDoubleTheInteger( int value)
{
    std::cout << value << " doubled is: " << value * 2 << '\n';

}

void getSquareTheInteger(int number)
{
    std::cout << "The square of the integer "<< number << " is " << number * number <<  '\n';
}


//This just for practice as there is an easier way of doing this
int getFirstValueForAdding()
 {
    std::cout <<"--Getting Values for addition--\n";
    std::cout << "Enter the first Integer: ";
    int firstNumber{0};
    std::cin >>firstNumber;
    return firstNumber;

 }

 int getSecondValueForAdding()
 {
    std::cout <<"Enter the second Integer: ";
    int secondNumber{0};
    std::cin >>secondNumber;
    return secondNumber;

    
}

int add (int x, int y) 
{
    return x + y;
}


int main() 
{
    int num{getValueFromUser()};
    getDoubleTheInteger(num);

    getSquareTheInteger(num);

    int first{getFirstValueForAdding()};

    int second{getSecondValueForAdding()};

    std::cout << "The sum of " << first<< " and " << second << " is " << add(first,second)<< "\n";

    return 0;
}