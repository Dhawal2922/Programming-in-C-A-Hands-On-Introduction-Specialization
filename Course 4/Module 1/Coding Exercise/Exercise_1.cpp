
#include <iostream>
using namespace std;
//add class definitions below this line
class Fruit {
  public:
    // Constructor to initialize name and color
    Fruit(const string& n, const string& c) : name(n), color(c) {}
    // Getter for name
    string GetName() const {
        return name;
    }
    // Setter for name
    void SetName(const string& n) {
        name = n;
    }
    // Getter for color
    string GetColor() const {
        return color;
    }
    // Setter for color
    void SetColor(const string& c) {
        color = c;
    }
  private:
    string name;   // Attribute for fruit name
    string color;  // Attribute for fruit color
};
//add class definitions above this line
int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE
  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
}
