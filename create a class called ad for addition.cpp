#include <iostream>
using namespace std;
class Add {
private:
    int value;
public:
    Add() : value(0) {}
    Add(int v) : value(v) {}
    Add operator+(const Add& other) const {
        return Add(value + other.value);
    }
    int getValue() const {
        return value;
    }
};
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    Add a(num1);
    Add b(num2);
    Add result = a + b;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result.getValue() << endl;
    return 0;
}

