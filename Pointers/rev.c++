#include <iostream>
using namespace std;
int reversenumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    } else {
        reversed = reversed * 10 + num % 10;
        return reversenumber(num / 10, reversed);
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reversed = reversenumber(num, 0);
    cout << "Reversed number: " << reversed << endl;
    return 0;
}