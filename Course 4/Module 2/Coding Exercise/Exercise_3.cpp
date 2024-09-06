#include <iostream>
using namespace std;

// DO NOT EDIT code below this line

class Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent1";
    }
};

class Parent2 : public Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent2";
    }
};

// DO NOT EDIT code above this line

// Add class definitions below this line

class Child : public Parent2 {
  public:
    // Override the Identify function from Parent2
    string Identify() {
      return "This function is called from Child";
    }
  
    // Call the Identify function from Parent2 using the scope resolution operator
    string Identify2() {
      return Parent2::Identify();
    }
  
    // Call the Identify function from Parent1 using the scope resolution operator
    string Identify3() {
      return Parent1::Identify();
    }
};

// Add class definitions above this line

int main() {
  
  // DO NOT EDIT code below this line

  Child c;
  cout << c.Identify() << endl;   // Expected: This function is called from Child
  cout << c.Identify2() << endl;  // Expected: This function is called from Parent2
  cout << c.Identify3() << endl;  // Expected: This function is called from Parent1
  
  // DO NOT EDIT code above this line
  
  return 0;
}
