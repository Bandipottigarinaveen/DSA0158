#include <iostream>
using namespace std; 
int main() {
    int a, b, temp;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Before swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

