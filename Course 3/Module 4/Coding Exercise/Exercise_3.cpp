#include <iostream>
using namespace std;

// Add class definitions below this line

class Mass {
public:
    Mass(double mg, double g, double kg) 
        : milligrams(mg), grams(g), kilograms(kg) {
    }

    // Function to calculate total weight in grams
    double TotalWeight() const {
        return milligrams / 1000 + grams + kilograms * 1000;
    }

    // Function to compare the weight of this Mass object with another Mass object
    string CompareWeight(const Mass& other) const {
        double thisWeight = TotalWeight();
        double otherWeight = other.TotalWeight();

        if (thisWeight > otherWeight) {
            return "The first object is heavier.";
        } else if (thisWeight < otherWeight) {
            return "The second object is heavier.";
        } else {
            return "The two objects weigh the same.";
        }
    }

private:
    double milligrams;
    double grams;
    double kilograms;
};

// Add class definitions above this line   

int main() {
  
  // DO NOT EDIT the code below

  Mass m1(800, 17, 3);
  Mass m2(730, 38, 2);
  cout << m1.TotalWeight() << endl;
  cout << m2.TotalWeight() << endl;
  cout << m1.CompareWeight(m2) << endl;

  // DO NOT EDIT the code above
  
  return 0;
}
