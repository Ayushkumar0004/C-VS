#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;
    double gpa;

    void input() {
        std::cout << "Enter student name: ";
        std::cin.ignore(); // Clear any previous newline character
        std::getline(std::cin, name);

        std::cout << "Enter student age: ";
        std::cin >> age;

        std::cout << "Enter student GPA: ";
        std::cin >> gpa;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};

int main() {
    int n;

    std::cout << "Enter the number of students: ";
    std::cin >> n;

    Student students[n]; // Create an array of Student objects

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":" << std::endl;
        students[i].input();
    }

    std::cout << "Student Information:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Student " << i + 1 << ":" << std::endl;
        students[i].display();
        std::cout << std::endl;
    }

    return 0;
}