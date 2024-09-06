#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    // Attributes
    string breed;
    string color;
    string name;

    // Constructor with no parameters
    Cat() {
        breed = "American Shorthair";
        color = "black";
        name = "Kiwi";
    }
};

int main() {
    Cat cat;
    cout << cat.breed << endl;
    cout << cat.color << endl;
    cout << cat.name << endl;
    return 0;
}
