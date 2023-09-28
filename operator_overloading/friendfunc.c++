#include<iostream>
using namespace std;
class Mm_greater;
class MyFriend {
public:
    static bool isLessOrEqual(const Mm_greater &o1, const Mm_greater &o2);
};
class Mm_greater {
    int a, b;
public:
    Mm_greater() {
        a = 0;
        b = 0;
    }
    Mm_greater(int x, int y) {
        a = x;
        b = y;
    }
    bool operator<=(const Mm_greater &o) const {
        return (a <= o.a) && (b <= o.b);
    }
    friend class MyFriend;
};
bool MyFriend::isLessOrEqual(const Mm_greater &o1, const Mm_greater &o2) {
    return o1 <= o2;
}
int main() {
    Mm_greater o1(4, 5), o2(5, 4);
    
    if (MyFriend::isLessOrEqual(o1, o2)) {
        cout << "The value of o1 is less than or equal to o2";
    } else {
        cout << "The value of o1 is greater than o2";
    }
    
    return 0;
}