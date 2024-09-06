
#include <iostream>
using namespace std;
// DO NOT EDIT //////////////////////////////////
class Vehicle {
  public:
    virtual void Distance(double time) = 0; // Pure virtual function
};
// ////////////////////////////////////////////////
// Add class definitions below this line
class Airplane : public Vehicle {
  private:
    double speed; // Attribute to store the speed of the airplane
  public:
    // Constructor to initialize the speed
    Airplane(double s) : speed(s) {}
    // Override Distance function to calculate and print the distance
    void Distance(double time) override {
        // Calculate the distance
        double distance = speed * time;
        // Print the distance
        cout << distance << endl;
    }
};
// Add class definitions above this line
int main() {
  
  // DO NOT EDIT code below this line
  
  Airplane a(550.0);
  a.Distance(2);
  a.Distance(3.15);
  a.Distance(10.63);
  Airplane a2(228.5);
  a2.Distance(2);
  a2.Distance(3.15);
  a2.Distance(10.63);
  // DO NOT EDIT code above this line
  
  return 0;
}
