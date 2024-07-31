#include <iostream>
using namespace std;
bool isHarshad(int num) {
    int sum = 0, temp = num;
    while (temp) {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}
int main() {
    int num = 18; 
    cout << (isHarshad(num) ? "Harshad" : "Not Harshad") << endl;
    return 0;
}

