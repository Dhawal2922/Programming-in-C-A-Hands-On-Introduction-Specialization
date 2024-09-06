
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to print even or odd integers based on the string parameter
void GetOddsEvens(const string& flag, const vector<int>& numbers) {
    if (flag == "true") {
        for (int num : numbers) {
            if (num % 2 == 0) {
                cout << num << endl;
            }
        }
    } else if (flag == "false") {
        for (int num : numbers) {
            if (num % 2 != 0) {
                cout << num << endl;
            }
        }
    } else {
        cout << "Command was successfully executed." << endl;
    }
}

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}
