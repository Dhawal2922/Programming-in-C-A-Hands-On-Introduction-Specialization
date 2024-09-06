#include <iostream>
#include <string>
using namespace std;

class PracticeClass {
public:
    string name;
};

int main() {
    PracticeClass obj;
    obj.name = "Class Object";
    cout << obj.name;
    return 0;
}
