#include <iostream>
using namespace std;
bool isBuzz(int num) {
    return num % 7 == 0 || num % 10 == 7;
}
int main() {
    int num = 27; 
    cout << (isBuzz(num) ? "Buzz" : "Not Buzz") << endl;
    return 0;
}

