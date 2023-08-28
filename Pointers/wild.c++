#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    int *p;  // This is a wild pointer - uninitialized

    // Attempting to dereference the wild pointer
    // This will lead to undefined behavior or a crash
    *p = a;

    // Print the values to see the result (if the program doesn't crash)
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using the wild pointer
    int temp = *p;
    *p = b;
    b = temp;

    // Print the values after swapping (if the program doesn't crash)
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
