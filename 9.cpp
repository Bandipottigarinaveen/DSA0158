#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    int roundedNum = (num - floor(num) < 0.5) ? floor(num) : ceil(num);
    cout << "The number " << num << " rounded to the nearest integer is " << roundedNum << "." << endl;
    return 0;
}

