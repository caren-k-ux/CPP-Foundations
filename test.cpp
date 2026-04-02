#include <iostream>
using namespace std;
//namespace is used to  avoid name conflicts
 int main() {
    float num1, num2, sum;
    cout <<"iostream is a library containing  inbuilt datatypes and must be included('imported')"<<"in order for other functions to work; case sensitive; must be in small letters"<<endl;
    //cout is similar to print in python #Analogy:Screen
    cout <<"Enter the first number: "<<endl;
    //cin is like input in python Analogy keyboard
    //cin only allows you to input numbers, 1 word, 1 character,
    //If you add more than one character it will be pushed to the next cin
    //to add more than one word or character use getline(cin,lastName)
    cin >>num1;

    cout <<"Enter the Second Number"<<endl;
    cin >>num2;

    sum = num1 + num2;
    cout <<sum<<endl;
    cout <<"The sum is: "<<sum<<endl;
    cout <<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
    return 0;


}