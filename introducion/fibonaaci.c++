#include <iostream>
using namespace std;
void fibonacci(int n) {
    int first = 0, second = 1;

    for (int i = 0; i < n; ++i) {
        if (i == 0)
            cout << first;
        else if (i == 1)
            cout << ", " << second;
        else {
            int next = first + second;
            cout << ", " << next;
            first = second;
            second = next;
        }
    }
    cout << endl;
}

int main() {
    int numTerms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> numTerms;
    fibonacci(numTerms);
    return 0;
}
