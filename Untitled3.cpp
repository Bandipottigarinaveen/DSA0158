#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int num;  // Protected member to allow derived classes to access

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Virtual destructor for proper cleanup
    virtual ~Number() {}
};

// Derived class for square calculation
class Square : public Number {
public:
    // Constructor to initialize the number in the base class
    Square(int n) : Number(n) {}

    // Function to calculate the square of the number
    int getSquare() {
        return num * num;
    }
};

// Derived class for cube calculation
class Cube : public Number {
public:
    // Constructor to initialize the number in the base class
    Cube(int n) : Number(n) {}

    // Function to calculate the cube of the number
    int getCube() {
        return num * num * num;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Create objects of derived classes
    Square squareObj(number);
    Cube cubeObj(number);

    // Output results
    cout << "Square of " << number << " is: " << squareObj.getSquare() << endl;
    cout << "Cube of " << number << " is: " << cubeObj.getCube() << endl;

    return 0;
}

