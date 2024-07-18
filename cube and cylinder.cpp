#include <iostream>
#include <cmath>
using namespace std;
class Shape {
private:
    double volume;
public:
    Shape(double side) {
        volume = pow(side, 3);
    }
    Shape(double radius, double height) {
        volume = M_PI * pow(radius, 2) * height;
    }
    double getVolume() const {
        return volume;
    }
};
int main() {
    double side, radius, height;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    Shape cube(side);
    cout << "Volume of the cube: " << cube.getVolume() << endl;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    Shape cylinder(radius, height);
    cout << "Volume of the cylinder: " << cylinder.getVolume() << endl;
    return 0;
}

