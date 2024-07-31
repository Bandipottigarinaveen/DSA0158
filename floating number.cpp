#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    int floorValue = floor(number);
    int ceilValue = ceil(number);
    int roundedNumber;
    if ((number - floorValue) < (ceilValue - number)) {
        roundedNumber = floorValue;
    } else {
        roundedNumber = ceilValue;
    }
    cout << "The number " << number << " rounded to the nearest integer is " <<roundedNumber << endl;

    return 0;
}

