#include <iostream>
using namespace std;
float Area() 
{
    float radius;
    float pi = 3.14159;
    float area = pi * radius * radius;
    return area;
}
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = Area();
    cout << "The area of the circle is: " << area << endl;
    return 0;
}