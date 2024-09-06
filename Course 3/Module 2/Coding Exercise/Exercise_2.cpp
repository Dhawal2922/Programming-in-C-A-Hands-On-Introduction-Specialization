
#include <iostream>
#include <vector>
using namespace std;
// Recursive function to calculate the sum of elements in a vector
int ListSum(const vector<int>& nums, int index = 0) {
    // Base case: if the index is equal to the size of the vector, return 0
    if (index >= nums.size()) {
        return 0;
    }
    // Recursive case: sum the current element and the sum of the remaining elements
    return nums[index] + ListSum(nums, index + 1);
}
int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
