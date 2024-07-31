#include <iostream>
using namespace std;
class A {
protected:
    int x;
public:
    void setX(int val) {
        x = val;
    }
};
class B : private A {
public:
    void display() {
        cout << "Here x is the protected data member of class A, ";
        cout << "class A is inherited privately to class B." << endl;
        cout << "In private inheritance, only protected data member ";
        cout << "and member functions can be accessed by the derived class." << endl;
        cout << "Value of x: " << x << endl;
    }
    void setXInB(int val) {
        setX(val);
    }
};
int main() {
    B obj;
    int value;
    cout << "Enter value of x: ";
    cin >> value;
    obj.setXInB(value);
    obj.display();
    return 0;
}

