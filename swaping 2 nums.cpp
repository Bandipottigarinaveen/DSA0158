#include <iostream>
using namespace std;

class number {
public:
    int a, b;

    // Constructor to initialize the numbers
    number(int x, int y) : a(x), b(y) {}

    // Method to swap the numbers using XOR
    void swap() {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    // Method to display the numbers
    void displayswap() const {
        cout << "First number: " << a << endl;
        cout << "Second number: " << b << endl;
    }
};

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Create an instance of number with the input values
    number swap(num1, num2);

    // Display original numbers
    cout << "Original numbers:" << endl;
    swap.displayswap();

    // Swap the numbers
    swap.swap();

    // Display swapped numbers
    cout << "Swapped numbers:" << endl;
    swap.displayswap();

    return 0;
}

