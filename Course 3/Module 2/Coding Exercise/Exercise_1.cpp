#include <iostream>
using namespace std;

// Recursive function to calculate the sum of integers from 0 to n
int RecursiveSum(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + RecursiveSum(n - 1);
    }
}

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}
