#include <iostream>
#include <cctype> 
using namespace std;
class character {
public:
    char ch;
    void result() {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << ch << " is a vowel" << endl;
        } else if (isalpha(ch)) {
            cout << ch << " is a consonant" << endl;
        } else {
            cout << ch << " is not valid" << endl;
        }
    }
};
int main() {
    char ch; 
    cout << "Enter a character: ";
    cin >> ch;
    character oops;
    oops.ch = ch;
    oops.result();
    return 0;
}

