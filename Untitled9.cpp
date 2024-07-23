#include <iostream>
using namespace std;
class Bank {
public:
    virtual float getRateOfInterest() {
        return 0;
    }
};
class SBI : public Bank {
public:
    float getRateOfInterest() {
        return 5.5f;
    }
};/
class ICICI : public Bank {
public:
    float getRateOfInterest() {
        return 6.0f;
    }
};
class AXIS : public Bank {
public:
    float getRateOfInterest() {
        return 5.75f;
    }
};
int main() {
    float principal;
    int years;
    float rate;

    cout << "Enter the principal Amount: ";
    cin >> principal;
    cout << "Enter the No. of years: ";
    cin >> years;
    cout << "Enter the rate of Interest: ";
    cin >> rate;
    float simpleInterest = (principal * rate * years) / 100;
    cout << "Simple Interest: " << simpleInterest << endl;
    return 0;
}

