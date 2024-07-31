#include <iostream>
#include <vector>
#include <algorithm> // For sort function

using namespace std;

int main() {
    vector<int> numbers;
    int number;

    // Input the numbers until -1 is entered
    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        cin >> number;
        if (number == -1) {
            break;
        }
        numbers.push_back(number);
    }

    // Sort the numbers using pointers
    sort(numbers.begin(), numbers.end());

    // Display the sorted numbers
    cout << "The Ascending order is given below:" << endl;
    for (const int num : numbers) {
        cout << num << endl;
    }

    return 0;
}

