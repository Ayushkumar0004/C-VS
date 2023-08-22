#include <iostream>
using namespace std;
void Area(double radius) 
{
    const double pi = 3.14159;
    double area = pi * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}
void Area(int l, int b)
{
    int area = l * b;
    cout << "The area of the rectangle is: " << area << endl;
}

int main() 
{
    double rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    Area(rad);
    int x, y;
    cout << "Enter the length and breadth of the circle: ";
    cin >> x >> y;
    Area(x, y); // Calculate and display the area within the Area function
    return 0;
}