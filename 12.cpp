#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    string result = (x == y) ? "Numbers are equal" : "Numbers are not equal";
    cout << result << endl;
    return 0;
}

