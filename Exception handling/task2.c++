#include <iostream>
using namespace std;

void divide(double x, double y) {
    cout << "Inside function" << endl;
    try {
        if (y == 0.0) {
            throw "Division by zero is not allowed.";
        } else {
            cout << "Division = " << x / y << endl;
        }
    } catch (double) {
        cout << "Caught a double exception." << endl;
    } catch (const char* exception) {
        cout << "Caught the exception: " << exception << endl;
        throw;
    }
    cout << "End the function" << endl;
}

int main() {
    cout << "Inside main" << endl;
    try {
        divide(20.0, 2.0);
        divide(2.0, 0.0);
    } catch (double) {
        cout << "The value is double." << endl;
    }
    return 0;
}
