#include<iostream>
using namespace std;
class opr {
    int a, b, add;

public:
    void get() {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void sum();
} s;

// The sum function should be defined within the class declaration
inline void opr::sum() {
    add = a + b;
    cout << "Addition of two numbers is: " << add;
}

int main() {
    cout << "Program after inline function: "<< endl;
    s.get();
    s.sum(); // Calling get before sum

    return 0;
}