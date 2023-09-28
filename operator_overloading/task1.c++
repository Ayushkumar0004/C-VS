#include<iostream>
using namespace std;
class equality {
    int x, y;
public:
    equality() {
        x = 0;
        y = 0;
    }
    equality(int a, int b) {
        x = a;
        y = b;
    }
    friend bool operator==(equality o1, equality o2);
};
bool operator==(equality o1, equality o2) {
    return (o1.x == o2.x) && (o1.y == o2.y);
}
int main() {
    equality o1(3, 3), o2(3, 6);
    
    if (o1 == o2) {
        cout << "\n Values of x and y for o1 and o2 are same";
    } else {
        cout << "\n Values of x and y for o1 and o2 are not same";
    }
    return 0;
}