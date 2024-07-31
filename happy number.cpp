#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int slow = num;
    int fast = num;
    while (true) {
        int temp = slow;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        slow = sum;
        for (int i = 0; i < 2; i++) {
            temp = fast;
            sum = 0;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
            fast = sum;
        }
        if (fast == 1) {
            cout << num << " is a Happy number." << endl;
            break;
        }
        if (slow == fast) {
            cout << num << " is not a Happy number." << endl;
            break;
        }
    }
    return 0;
}
