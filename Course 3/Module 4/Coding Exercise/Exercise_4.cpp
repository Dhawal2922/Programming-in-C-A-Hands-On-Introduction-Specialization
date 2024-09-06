#include <iostream>
using namespace std;

// Add class definitions below this line

class MarbleBag {
public:
    // Constructor to initialize the number of red, blue, and yellow marbles
    MarbleBag(int r, int b, int y) 
        : red(r), blue(b), yellow(y) {
    }

    // Method to add red marbles
    void AddRed(int amount) {
        red += amount;
    }

    // Method to add blue marbles
    void AddBlue(int amount) {
        blue += amount;
    }

    // Method to add yellow marbles
    void AddYellow(int amount) {
        yellow += amount;
    }

    // Method to get the total number of red marbles
    int RedTotal() const {
        return red;
    }

    // Method to get the total number of blue marbles
    int BlueTotal() const {
        return blue;
    }

    // Method to get the total number of yellow marbles
    int YellowTotal() const {
        return yellow;
    }

    // Method to get the total number of all marbles
    int BagTotal() const {
        return red + blue + yellow;
    }

private:
    int red;
    int blue;
    int yellow;
};

// Add class definitions above this line   

int main() {
  
  // DO NOT EDIT code below this line
  
  MarbleBag bag(12, 8, 19);
  bag.AddRed(4);
  bag.AddBlue(12);
  bag.AddYellow(-1);
  bag.AddBlue(-3);
  cout << "There are " << bag.RedTotal() << " red marbles." << endl;
  cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
  cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
  cout << "There are " << bag.BagTotal() << " total marbles." << endl;

  // DO NOT EDIT code above this line
  
  return 0;
}
