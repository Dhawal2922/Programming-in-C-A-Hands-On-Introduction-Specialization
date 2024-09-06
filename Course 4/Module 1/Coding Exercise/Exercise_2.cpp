#include <iostream>
using namespace std;

// Add class definitions below this line

class Watch {
public:
    // Parameterized constructor
    Watch(string m, string mo, int d, int w, string ma) 
        : manufacturer(m), model(mo), diameter(d), water_resistance(w), material(ma) {}

    // Getter and setter for manufacturer
    string GetManufacturer() const {
        return manufacturer;
    }
    void SetManufacturer(const string& m) {
        manufacturer = m;
    }

    // Getter and setter for model
    string GetModel() const {
        return model;
    }
    void SetModel(const string& mo) {
        model = mo;
    }

    // Getter and setter for diameter
    int GetDiameter() const {
        return diameter;
    }
    void SetDiameter(int d) {
        diameter = d;
    }

    // Getter and setter for water_resistance
    int GetWaterResistance() const {
        return water_resistance;
    }
    void SetWaterResistance(int w) {
        water_resistance = w;
    }

    // Getter and setter for material
    string GetMaterial() const {
        return material;
    }
    void SetMaterial(const string& ma) {
        material = ma;
    }

    // Method to print all attributes
    void Summary() const {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Diameter: " << diameter << " mm" << endl;
        cout << "Water Resistance: " << water_resistance << " m" << endl;
        cout << "Material: " << material << endl;
    }

private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};

// Add class definitions above this line

int main() {
  
  // DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  // DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
}
