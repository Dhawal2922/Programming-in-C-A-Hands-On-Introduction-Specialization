#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive function to find the maximum value in a vector
int GetMax(const vector<int>& nums, int index = 0) {
    // Base case: If we're at the last element, return it
    if (index == nums.size() - 1) {
        return nums[index];
    }
    // Recursive case: Compare the current element with the maximum of the rest of the vector
    int maxOfRest = GetMax(nums, index + 1);
    return max(nums[index], maxOfRest);
}

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}
