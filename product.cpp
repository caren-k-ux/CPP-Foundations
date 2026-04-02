#include <iostream>
#include <string>
using namespace std;

struct product {
    int productCode;
    string productName;
    float unitPrice;
};

int main() {
    product p;
    cout << "Enter product code: " << endl;
    cin >> p.productCode;
    cin.ignore();
    cout << "Enter product name: " << endl;
    getline(cin, p.productName);
    cout << "Enter unit price: " << endl;
    cin >> p.unitPrice;

    cout << "\n--- Displaying Product ---" << endl;
    cout << "Code: " << p.productCode << endl;
    cout << "Name: " << p.productName << endl;
    cout << "Price: " << p.unitPrice << endl;

    return 0;
}