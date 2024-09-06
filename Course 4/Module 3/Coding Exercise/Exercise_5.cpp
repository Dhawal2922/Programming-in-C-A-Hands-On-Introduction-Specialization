
#include <iostream>
#include <string>
using namespace std;
// DO NOT EDIT ///////////////////////////////////////////
class Words {                                         //
  public:                                             //
    Words(string s1) {                                //
      original = s1;                                  //
    }                                                 //
                                                      //
    virtual string SubstituteChar() {                 //
      string sub;                                     //
      if (original.length() < 3) {                    //
        return "Not enough characters";               //
      }                                               //
      else {                                          //
        for (int i = 0; i < original.length(); i++) { //
          if (i == 2) {                               //
            sub += "HELLO";                           //
          }                                           //
          else {                                      //
            sub += original.at(i);                    //
          }                                           //
        }                                             //
      }                                               //
      return sub;                                     //
    }                                                 //
                                                      //
    string GetOriginal() {                           // Add getter for original
      return original;                                //
    }                                                 //
                                                      //
  private:                                            //
    string original;                                  //
};                                                    //
////////////////////////////////////////////////////////
// Add class definitions below this line
class Substitute : public Words {
  public:
    Substitute(string s1) : Words(s1) {}
    string SubstituteChar() override {
      string sub;
      string original = GetOriginal(); // Access the original string using the getter
      
      if (original.length() < 5) { // Check if the string has fewer than 5 characters
        return "Not enough characters";
      }
      
      for (size_t i = 0; i < original.length(); ++i) {
        if ((i + 1) % 5 == 0) { // Every fifth character
          sub += "HELLO";
        } else {
          sub += original[i];
        }
      }
      
      return sub;
    }
};
// Add class definitions above this line
int main() {
  
  // DO NOT EDIT code below this line
  
  Substitute s1("dog");
  cout << s1.SubstituteChar() << endl; // Should print "Not enough characters"
  
  Substitute s2("string");
  cout << s2.SubstituteChar() << endl; // Should print "striHELLOg"
  
  Words w("string");
  cout << w.SubstituteChar() << endl; // Should print "stHELLOing"
  
  // DO NOT EDIT code above this line
  
  return 0;
}

#include <iostream>
#include <string>
using namespace std;
// DO NOT EDIT ///////////////////////////////////////////
class Words {                                         //
  public:                                             //
    Words(string s1) {                                //
      original = s1;                                  //
    }                                                 //
                                                      //
    virtual string SubstituteChar() {                 //
      string sub;                                     //
      if (original.length() < 3) {                    //
        return "Not enough characters";               //
      }                                               //
      else {                                          //
        for (int i = 0; i < original.length(); i++) { //
          if (i == 2) {                               //
            sub += "HELLO";                           //
          }                                           //
          else {                                      //
            sub += original.at(i);                    //
          }                                           //
        }                                             //
      }                                               //
      return sub;                                     //
    }                                                 //
                                                      //
    string GetOriginal() {                           // Add getter for original
      return original;                                //
    }                                                 //
                                                      //
  private:                                            //
    string original;                                  //
};                                                    //
////////////////////////////////////////////////////////
// Add class definitions below this line
class Substitute : public Words {
  public:
    Substitute(string s1) : Words(s1) {}
    string SubstituteChar() override {
      string sub;
      string original = GetOriginal(); // Access the original string using the getter
      
      if (original.length() < 5) { // Check if the string has fewer than 5 characters
        return "Not enough characters";
      }
      
      for (size_t i = 0; i < original.length(); ++i) {
        if ((i + 1) % 5 == 0) { // Every fifth character
          sub += "HELLO";
        } else {
          sub += original[i];
        }
      }
      
      return sub;
    }
};
// Add class definitions above this line
int main() {
  
  // DO NOT EDIT code below this line
  
  Substitute s1("dog");
  cout << s1.SubstituteChar() << endl; // Should print "Not enough characters"
  
  Substitute s2("string");
  cout << s2.SubstituteChar() << endl; // Should print "striHELLOg"
  
  Words w("string");
  cout << w.SubstituteChar() << endl; // Should print "stHELLOing"
  
  // DO NOT EDIT code above this line
  
  return 0;
}
