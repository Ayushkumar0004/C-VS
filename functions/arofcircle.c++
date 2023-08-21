#include <iostream>
using namespace std;
double Area(double radius) 
{
    const double pi = 3.14159;
    double area = pi * radius * radius;
    return area;
}
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = Area(radius);
    cout << "The area of the circle is: " << area << endl;
    return 0;
}