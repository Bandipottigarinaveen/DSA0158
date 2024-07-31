#include <iostream>
using namespace std;
int add(int a, int b , int c = 30) {
    return a + b + c;
}

int main() {
    cout << "Sum of : " << add(20,30) << endl;
    return 0;
}

