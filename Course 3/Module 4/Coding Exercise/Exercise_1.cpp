#include <iostream>
using namespace std;

// Add class definitions below this line

class CelestialBody {
public:
    CelestialBody(string n, double diam, double dist, int m)
        : name(n), diameter(diam), distance(dist), moons(m) {
    }

    // Public member function to access private attributes if needed
    string getName() const { return name; }
    double getDiameter() const { return diameter; }
    double getDistance() const { return distance; }
    int getMoons() const { return moons; }

private:
    string name;
    double diameter;
    double distance;
    int moons;
};

// Add class definitions above this line   

double ComparedToEarth(const CelestialBody& planet) {
    double earth_diameter = 12756.3;  // Diameter of Earth in kilometers
    double relative_size = planet.getDiameter() / earth_diameter;
    return relative_size;
}

int main() {
    CelestialBody planet("Jupiter", 142984, 778360000, 79);
  
    // Modify the code below
    cout << ComparedToEarth(planet) << endl;
    // Modify the code above

    return 0;
}
