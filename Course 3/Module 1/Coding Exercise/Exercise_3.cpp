#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if a term exists in a vector of strings
bool FindTerm(const string& term, const vector<string>& vec) {
    for (const string& str : vec) {
        if (str == term) {
            return true;
        }
    }
    return false;
}

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}
