#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "abcdNGF^$123";
    string s2 = "efghLFRT*&^6578";
    s1.insert(3, s2);
    cout << "The inserted value is: " << s1 << endl;
    s1.erase(5, 4);
    cout << "The erased value is: " << s1 << endl;
    s1.replace(2, 5, s2);
    cout << "The replaced value is: " << s1 << endl;
    if (s1.empty()) {
        cout << "s1 is empty." << endl;
    } else {
        cout << "s1 is not empty." << endl;
    }
    int s1_length = s1.size();
    int s2_length = s2.size();
    cout << "Length of s1: " << s1_length << endl;
    cout << "Length of s2: " << s2_length << endl;
    if (s1_length < s2_length) {
        cout << "s1 is smaller than s2." << endl;
    } else if (s1_length > s2_length) {
        cout << "s1 is larger than s2." << endl;
    } else {
        cout << "s1 and s2 are of equal length." << endl;
    }
    int upper_count_s1 = 0;
    int lower_count_s1 = 0;
    for (char c : s1) {
        if (isupper(c)) {
            upper_count_s1++;
        } else if (islower(c)) {
            lower_count_s1++;
        }
    }
    int upper_count_s2 = 0;
    int lower_count_s2 = 0;
    for (char c : s2) {
        if (isupper(c)) {
            upper_count_s2++;
        } else if (islower(c)) {
            lower_count_s2++;
        }
    }
    cout << "Number of uppercase letters in s1: " << upper_count_s1 << endl;
    cout << "Number of lowercase letters in s1: " << lower_count_s1 << endl;
    cout << "Number of uppercase letters in s2: " << upper_count_s2 << endl;
    cout << "Number of lowercase letters in s2: " << lower_count_s2 << endl;
    
}