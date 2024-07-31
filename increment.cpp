#include <iostream>
using namespace std;
class Incrementer {
private:
    int value;
public:
    Incrementer(int v) : value(v) {}
    Incrementer& operator++() {
        ++value;
        return *this;
    }
    Incrementer operator++(int) {
        Incrementer temp = *this;
        ++value;
        return temp;
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Incrementer obj(10); 
    cout << "Initial ";
    obj.display();
    ++obj;
    cout << "After prefix increment ";
    obj.display();
    obj++; 
    cout << "After postfix increment ";
    obj.display();
    return 0;
} 
