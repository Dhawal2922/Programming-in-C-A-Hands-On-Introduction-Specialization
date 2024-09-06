#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BigCat {
public:
    // Attributes
    string species;
    string common_name;
    vector<string> habitat;
    string genus = "panthera";  // Default value for genus

    // Constructor
    BigCat(const string& species, const string& common_name, const vector<string>& habitat)
        : species(species), common_name(common_name), habitat(habitat) {
    }
};

int main() {
    BigCat snow_leopard("uncia", "snow leopard", {"Himalaya mountains", "Siberian mountains"});
    cout << "A " << snow_leopard.common_name; 
    cout << " is part of the " << snow_leopard.species << " species." << endl;
    cout << "Their genus class is " << snow_leopard.genus << "." << endl;
    for (auto a : snow_leopard.habitat) {
        cout << a << ", ";
    }
    cout << "etc." << endl;
    return 0;
}
