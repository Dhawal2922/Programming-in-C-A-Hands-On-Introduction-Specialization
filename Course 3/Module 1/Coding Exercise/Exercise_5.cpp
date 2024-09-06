#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string Reverse(string x) {
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  return y;
}

// Function to check if a string is a palindrome
bool IsPalindrome(const string& str) {
    string reversedStr = Reverse(str);
    return str == reversedStr;
}

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
