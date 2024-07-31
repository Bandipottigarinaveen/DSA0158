#include <iostream>
using namespace std;
bool isNeon(int num) {
    int square = num * num, sum = 0;
    while (square) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}
int main() {
    int num = 9; 
    cout << (isNeon(num) ? "Neon" : "Not Neon") << endl;
    return 0;
}

