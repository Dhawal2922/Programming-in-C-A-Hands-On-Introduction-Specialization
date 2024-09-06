#include <iostream>
#include <vector>
using namespace std;

// DO NOT EDIT/////////////////
class VectorAddThree {      //
  public:                   //
    virtual vector<int> Add() { // Make Add virtual if you want to override it
      nums.push_back(num1); //
      nums.push_back(num2); //
      nums.push_back(num3); //
      return nums;          //
    }                       //
                            //
  protected:                //
    int num1 = 1;           //
    int num2 = 2;           //
    int num3 = 3;           //
                            //
  private:                  //
    vector<int> nums;       //
};                          //
//////////////////////////////

// Add class definitions below this line

class VectorAddSix : public VectorAddThree {
  public:
    vector<int> Add() override { // Ensure this method has the same signature
      vector<int> nums = VectorAddThree::Add(); // Get the base class vector
      nums.push_back(4); // Add additional elements
      nums.push_back(5);
      nums.push_back(6);
      return nums;
    }
};

// Add class definitions above this line

int main() {
  
  // DO NOT EDIT code below this line
   
  VectorAddSix v6;
  for (int i : v6.Add()) {
    cout << i << endl;
  }

  // DO NOT EDIT code above this line
  
  return 0;
}
