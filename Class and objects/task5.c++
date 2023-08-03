#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    // Member function to calculate the area
    double calculateArea() {
        return 3.141 * radius * radius;
    }
};
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    double area = circle.calculateArea();
    cout << "Area of the circle is: " << area << endl;
    return 0;
}