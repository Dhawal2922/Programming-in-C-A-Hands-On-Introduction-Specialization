#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Superhero {
public:
    // Attributes
    string name;
    string identity;
    vector<string> powers;

    // Constructor
    Superhero(const string& name, const string& identity, const vector<string>& powers) {
        this->name = name;
        this->identity = identity;
        this->powers = powers;
    }
};

int main() {
    Superhero iron_man("Iron Man", "Tony Stark", {"armored suit", "laser beams", "flight"});
    cout << iron_man.name << endl;
    cout << iron_man.identity << endl;
    for (auto a : iron_man.powers) {
        cout << a << endl;
    }
    return 0;
}
