#include <iostream>
using namespace std;
class Swap {
private:
    int num1, num2;
public:
    Swap() {
        num1;
        num2;
    }
    Swap(int a, int b) {
        num1 = a;
        num2 = b;
    }
    void swapNumbers() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    void displayNumbers() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};
int main() {
    Swap swap1(5, 10);
    cout << "Before swapping:" << endl;
    swap1.displayNumbers();
    swap1.swapNumbers(); 
    cout << "After swapping:" << endl;
    swap1.displayNumbers();
    return 0;
}
