#include <iostream>
#include <string> //Mandatory  for strings!
using namespace std;
int main() 
{
    int age;
    string firstName, lastName, fullName, regNumber ;

    cout 
    <<"Enter your registration number: " <<endl;

    cin >>regNumber;
    
    cout 
    <<"Enter your age: " <<endl;

    cin >>age;

    cout <<"Enter Your  first name: "<<endl;
    cin >>firstName;

    cout <<"Enter your last name: "<<endl;
    cin >>lastName;

    cin.ignore();//The "Sanitizer": Clears the leftover 'Enter' key
    //Used to ensure the getline() runs by preventing system crashes
    cout <<"Enter your full name: "<<endl;
    getline(cin, fullName);//used to  return more than one character or word
    return 0;

}