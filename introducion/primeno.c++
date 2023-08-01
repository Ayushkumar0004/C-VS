#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number.\n";
    } else {
        cout << n << " is not a prime number.\n";
    }
    return 0;
}
