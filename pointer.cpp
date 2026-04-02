#include <iostream>
using namespace std;

int main() {
    int age;
    age = 23;
    int *p;
    p = &age;
    cout <<age<<endl;
    cout <<p<<endl;
    cout <<*p<<endl;
    cout <<&age <<endl;
    return 0;


}