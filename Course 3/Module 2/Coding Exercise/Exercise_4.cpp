	4. #include <iostream>
using namespace std;

// Recursive function to reverse a string
string ReverseString(const string& str) {
    // Base case: if the string is empty, return it
    if (str.empty()) {
        return "";
    }
    // Recursive case: reverse the substring excluding the first character, then append the first character
    return ReverseString(str.substr(1)) + str[0];
}

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
