#include <iostream>
#include <string>
using namespace std;

class Observation {
public:
    // Attributes
    string date;
    double temperature;
    double elevation;
    int penguins;
    double precipitation;

    // Constructor with default value for precipitation
    Observation(const string& date, double temperature, double elevation, int penguins, double precipitation = 0.0)
        : date(date), temperature(temperature), elevation(elevation), penguins(penguins), precipitation(precipitation) {
    }
};

int main() {
    Observation o("October 26, 2019", -47, 329.4, 3);
    cout << "Today is " << o.date << "." << endl;
    cout << "Temperature: " << o.temperature << endl;
    cout << "Elevation: " << o.elevation << endl;
    cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;
    return 0;
}
