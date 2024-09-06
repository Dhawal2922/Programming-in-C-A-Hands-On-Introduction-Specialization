#include <iostream>
#include <iomanip>
using namespace std;

class Atm {
  public:
    // Constructor initializes money to 0
    Atm() : money(0.0) {}

    // Getter for money
    double GetMoney() const {
        return money;
    }

    // Deposit function
    void Deposit(double amount) {
        if (amount > 0) {
            money += amount;
        } else {
            cout << "You cannot deposit a negative or 0 amount of money." << endl;
        }
    }

    // Withdraw function
    void Withdraw(double amount) {
        if (amount > 0) {
            if (money >= amount) {
                money -= amount;
            } else {
                cout << "You do not have enough funds to withdraw that amount." << endl;
            }
        } else {
            cout << "You cannot withdraw a negative or 0 amount of money." << endl;
        }
    }

  private:
    double money; // amount of money in the ATM
};

int main() {
  
  // DO NOT EDIT CODE BELOW THIS LINE

  Atm my_atm;
  my_atm.Deposit(-10);
  my_atm.Deposit(100.02);
  my_atm.Withdraw(-20);
  my_atm.Withdraw(200);
  my_atm.Withdraw(50.22);
  cout << fixed; // prevents value from being truncated or rounded
  cout << setprecision(2); // sets value to 2 decimal places
  cout << my_atm.GetMoney() << endl;

  // DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
}
