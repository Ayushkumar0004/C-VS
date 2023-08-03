// wap of factorial ,wap area of circle
#include <iostream>
using namespace std;
class FactorialCalculator {
public:
    int factorial(int n) {
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    FactorialCalculator factorialCalculator;
    int result = factorialCalculator.factorial(number);
    cout << "Factorial of " << number << " is: " << result << std::endl;

    return 0;
}