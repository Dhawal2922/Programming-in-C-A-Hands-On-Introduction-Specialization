#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool IsPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Characters don't match
        }
        left++;
        right--;
    }

    return true; // All characters matched
}

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
