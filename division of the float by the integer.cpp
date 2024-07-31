#include <iostream>
using namespace std;
int main() {
    int intValue;
    float floatValue;
    cout << "Enter an integer: ";
    cin >> intValue;
    cout << "Enter a float: ";
    cin >> floatValue;
    if (intValue == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; 
    }
    float result = floatValue / intValue;
    cout << "The result of dividing " << floatValue << " by " << intValue << " is: " << result << endl;
    return 0;
}

