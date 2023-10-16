#include <iostream>
using namespace std;

class A {
public:
    int x, y, z;

    void ipA() {
        cout << "Enter the values x, y, and z: ";
        cin >> x >> y >> z;
    }
};

class B : public A {
public:
    int total; // Changed the variable name to 'total' to avoid naming conflict

    void calculateSum() {
        total = x + y + z;
        cout << "Sum: " << total << endl;
    }
};

class C : public A {
public:
    void findMax() {
        if (x > y && x > z) {
            cout << "x is greater." << endl;
        }
        else if (y > x && y > z) {
            cout << "y is greater." << endl;
        }
        else {
            cout << "z is greater." << endl;
        }
    }
};

class D : public A {
public:
    int best1, best2;

    void findTwoLargest() {
        best1 = max(max(x, y), z);

        if (x == best1)
            best2 = max(y, z);
        else if (y == best1)
            best2 = max(x, z);
        else
            best2 = max(x, y);

        cout << "The two largest values are: " << best1 << " and " << best2 << endl;
    }
};

int main() {
    B o1;
    o1.ipA();
    o1.calculateSum();

    C o2;
    o2.ipA();
    o2.findMax();

    D o3;
    o3.ipA();
    o3.findTwoLargest();

    return 0;
}
