#include <iostream>
using namespace std;

void Area(double radius) 
{
    const double pi = 3.14159;
    double area = pi * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}

int main() 
{
    double rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    Area(rad); // Calculate and display the area within the Area function
    return 0;
}