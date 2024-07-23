#include <iostream>
using namespace std;

// Function to find the greatest of three numbers using pointers
int findGreatest(int *ptr1, int *ptr2, int *ptr3) {
    int greatest = *ptr1; // Assume the first number is the greatest initially

    if (*ptr2 > greatest) {
        greatest = *ptr2;
    }
    if (*ptr3 > greatest) {
        greatest = *ptr3;
    }

    return greatest;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Create pointers to the numbers
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;

    // Find the greatest number using pointers
    int greatest = findGreatest(ptr1, ptr2, ptr3);

    // Output the greatest number
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}

