#include <iostream>
using namespace std;
double radius; // Declare radius as a global variable
void Area() 
{
    const double pi = 3.14159;
    double area = pi * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}

int main() 
{
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Area(); // Calculate and display the area within the Area function
    return 0;
}