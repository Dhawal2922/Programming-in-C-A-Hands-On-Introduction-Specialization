#include <iostream>
using namespace std;

// Add class definitions below this line

class Subway {
public:
    // Constructor to initialize the subway with 0 passengers and 0 total fares
    Subway() : passengers(0), total_fares(0) {}

    // Method to get the current number of passengers
    int GetPassengers() const {
        return passengers;
    }

    // Method to board a number of passengers
    void Board(int p) {
        if (p > 0) {
            passengers += p;
            CalculateFares(); // Update total fares
        }
    }

    // Method to disembark a number of passengers
    void Disembark(int p) {
        if (p > 0) {
            passengers -= p;
            if (passengers < 0) {
                passengers = 0; // Ensure passengers don't drop below 0
            }
        }
    }

    // Method to get the total fares collected
    double GetFares() const {
        return total_fares;
    }

private:
    // Helper function to calculate fares based on current number of passengers
    void CalculateFares() {
        total_fares = passengers * fare;
    }

    const double fare = 2.40; // Fare per passenger (constant)
    int passengers;           // Number of passengers on the subway
    double total_fares;       // Total fares collected
};

// Add class definitions above this line   

int main() {
  
  // DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  // DO NOT EDIT code above this line
  
  return 0;
}
