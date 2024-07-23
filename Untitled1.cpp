#include <iostream>
#include <cmath>

using namespace std;

// Base Class
class Shape {
protected:
    float radius; // For circle

public:
    void getRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    float calculateCircleArea() {
        return M_PI * radius * radius;
    }
};

// Derived Class 1
class Rectangle : public Shape {
protected:
    float length, breadth;

public:
    void getDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }

    float calculateRectangleArea() {
        return length * breadth;
    }
};

// Derived Class 2
class Cylinder : public Rectangle {
private:
    float height;

public:
    void getDimensionsForCylinder() {
        getRadius(); // Reuse radius from Shape class
        getDimensions(); // Reuse length and breadth from Rectangle class

        cout << "Enter the height: ";
        cin >> height;
    }

    float calculateVolume() {
        // Volume of cylinder = base area (circle) * height
        return calculateCircleArea() * height;
    }
};

int main() {
    Cylinder cylinder;

    // Get dimensions and calculate volume
    cylinder.getDimensionsForCylinder();
    cout << "The volume of the cylinder is: " << cylinder.calculateVolume() << endl;

    // For Circle
    Shape shape;
    shape.getRadius();
    cout << "The area of the circle is: " << shape.calculateCircleArea() << endl;

    // For Rectangle
    Rectangle rectangle;
    rectangle.getDimensions();
    cout << "The area of the rectangle is: " << rectangle.calculateRectangleArea() << endl;

    return 0;
}

