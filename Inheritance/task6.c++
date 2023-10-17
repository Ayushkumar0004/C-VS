#include <iostream>
using namespace std;

class B {
protected:
    int x;
public:
    void get_dataB() {
        cout << "Enter value of x: ";
        cin >> x;
    }
};
class DB1 : virtual public B {
protected:
    int y;
public:
    void get_dataDB1() {
        cout << "Enter value of y: ";
        cin >> y;
    }
};
class DB2 : virtual public B {
protected:
    int z;

public:
    void get_dataDB2() {
        cout << "Enter value of z: ";
        cin >> z;
    }
};
class D : virtual public DB1, virtual public DB2 {
public:
    void sum() {
        int result = x + y + z;
        cout << "Result is: " << result << endl;
    }
};
int main() {
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();
    return 0;
}