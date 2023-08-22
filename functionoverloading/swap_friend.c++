#include <iostream>

class Numbers {
private:
    int num1;
    int num2;

public:
    Numbers(int n1, int n2) : num1(n1), num2(n2) {}

    // Declare the friend function inside the class
    friend void swapNumbers(Numbers& numbers);

    void display() {
        std::cout << "Number 1: " << num1 << "\tNumber 2: " << num2 << std::endl;
    }
};

// Define the friend function outside the class
void swapNumbers(Numbers& numbers) {
    // Swapping the numbers using a temporary variable
    int temp = numbers.num1;
    numbers.num1 = numbers.num2;
    numbers.num2 = temp;
}

int main() {
    int n1, n2;

    std::cout << "Enter number 1: ";
    std::cin >> n1;

    std::cout << "Enter number 2: ";
    std::cin >> n2;

    Numbers nums(n1, n2);

    std::cout << "Before swapping:" << std::endl;
    nums.display();

    // Calling the friend function to swap numbers
    swapNumbers(nums);

    std::cout << "After swapping:" << std::endl;
    nums.display();

    return 0;
}
