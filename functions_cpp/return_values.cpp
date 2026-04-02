#include <iostream>
#include <string>

//int is the return type
//A return type of int means the function will return some integer value to the
//caller(the specific value is no t specified here)

int returnFive() 
{
    //return statement provides the value that will be returned
    return 5;                                     //return value 5 back to the caller

}

int getValueFromUser()                             //This function returns an integer
{
    std::cout <<"Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;                                   //return the value the user entered back to the caller

}


int main() 
{
    std::cout << returnFive() << '\n';              //prints 5

    std::cout << returnFive() + 2 << '\n';          //prints 7

    returnFive();                                   //okay: the value 5 is returned, but is ignored since main() doesn't do anything with its

    int num {getValueFromUser()};                   //initialize num with the return value of getValueFromUser()

    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}












//when you use void (meaning no value will be returned  to the caller)
//to be able to return a value to the caller we set the function's returntype e.g int functionName
//note this does not determine what specific value will be returned -- it only determines what type of value will be returned
//inside the function that will return a value we use a return statement to 
//indicate the specific value being returned to the caller consisting of the:
//return keyword, followed by an expression(sometimes called the return expression)ending with a semicolon
//A value-returning  will return  a value each time it is called