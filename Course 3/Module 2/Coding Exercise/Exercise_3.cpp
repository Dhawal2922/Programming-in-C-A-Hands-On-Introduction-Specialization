	#include <iostream>
using namespace std;

// Recursive function to calculate the number of bunny ears
int BunnyEars(int bunnies) {
    // Base case: if there are no bunnies, there are 0 ears
    if (bunnies == 0) {
        return 0;
    }
    // Recursive case: 2 ears for the current bunny plus ears from the remaining bunnies
    return 2 + BunnyEars(bunnies - 1);
}

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}
