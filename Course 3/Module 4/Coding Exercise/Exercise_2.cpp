#include <iostream>
using namespace std;

// Add class definitions below this line

class CelestialBody {
public:
    CelestialBody(string n, double diam, double dist, int m) 
        : name(n), diameter(diam), distance(dist), moons(m) {
    }

    // Function to compare distances and return the name of the closer celestial body
    string CloserToSun(const CelestialBody& other) const {
        if (distance < other.distance) {
            return name;
        } else {
            return other.name;
        }
    }

private:
    string name;
    double diameter;
    double distance;
    int moons;
};

// Add class definitions above this line   

int main() {
  
  // DO NOT EDIT the code below
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;

  // DO NOT EDIT the code above
  
  return 0;
}
