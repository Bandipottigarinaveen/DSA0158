#include <iostream>

using namespace std;
class Shape {
public:
    virtual double area() const = 0; 
};
class Rectangle : public Shape {
protected:
    double length;
    double breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double area() const override {
        return length * breadth;
    }
    double volume(double h) const {
        return area() * h; 
    }
};
int main() {
    double length, breadth, height;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    Rectangle rect(length, breadth);
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Enter height of cuboid: ";
    cin >> height;
    cout << "Volume of cuboid: " << rect.volume(height) << endl;

    return 0;
}

