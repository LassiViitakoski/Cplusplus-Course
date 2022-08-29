// Section 5
// Basic I/O using cin and cout

#include <iostream>

using namespace std;

int main() {
    cout << "Hello world!" << endl;

    int num1;
    int num2;
    double num3;

    cout << "Enter 2 integers seperated with a space ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;

    cout << "Enter a double: ";
    cin >> num3;
    cout << "You entered: " << num3 << endl;

    return 0;
}