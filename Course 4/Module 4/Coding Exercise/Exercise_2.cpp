
#include <iostream>
using namespace std;
//add definitions below this line
enum seasons {
    winter = 1,  // Winter is the 1st season
    spring,      // Spring is the 2nd season
    summer,      // Summer is the 3rd season
    fall         // Fall is the 4th season
};

//add definitions above this line
int main() {
  
  //DO NOT EDIT code below this line
  seasons season1 = winter;
  seasons season2 = spring;
  seasons season3 = summer;
  seasons season4 = fall;
  cout << "Winter is the " << season1 << "st season of the year." << endl;
  cout << "Spring is the " << season2 << "nd season of the year." << endl;
  cout << "Summer is the " << season3 << "rd season of the year." << endl;
  cout << "Fall is the " << season4 << "th season of the year." << endl;
  //DO NOT EDIT code above this line
  
  return 0;
  
}
