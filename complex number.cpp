#include <iostream>

using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    // Constructor to initialize the values
    Complex(int r, int i) : real(r), imaginary(i) {}

    // Function to display the values
    void display() const {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    int realPart, imaginaryPart;

    // Input the values
    cout << "Enter the real part: ";
    cin >> realPart;
    cout << "Enter the imaginary part: ";
    cin >> imaginaryPart;

    // Create an instance of Complex class
    Complex* complexNumber = new Complex(realPart, imaginaryPart);

    // Use the pointer to call the display function
    complexNumber->display();

    // Clean up
    delete complexNumber;

    return 0;
}

