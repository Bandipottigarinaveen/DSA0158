#include <iostream>
using namespace std;
int sumOfDivisors(int num) {
    int sum = 1;
    for (int i = 2; i <= num / 2; ++i)
        if (num % i == 0) sum += i;
    return sum;
}
bool isAbundant(int num) {
    return sumOfDivisors(num) > num;
}
int main() {
    int num = 12; 
    cout << (isAbundant(num) ? "Abundant" : "Not Abundant") << endl;
    return 0;
}

