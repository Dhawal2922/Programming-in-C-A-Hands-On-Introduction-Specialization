#include <iostream>
using namespace std;

class CardBinder {
  public:
    // Constructor initializes gold_card and silver_card to 0
    CardBinder() : gold_card(0), silver_card(0) {}

    // Getter for gold_card
    int GetGold() const {
        return gold_card;
    }

    // Getter for silver_card
    int GetSilver() const {
        return silver_card;
    }

    // Getter for total number of cards
    int GetTotal() const {
        return gold_card + silver_card;
    }

    // Add gold cards
    void AddGold(int amount) {
        if (amount <= 0) {
            cout << "You cannot add a negative or 0 amount of cards." << endl;
        } else if (GetTotal() + amount > 20) {
            cout << "You do not have enough binder room." << endl;
        } else {
            gold_card += amount;
        }
    }

    // Remove gold cards
    void RemoveGold(int amount) {
        if (amount <= 0) {
            cout << "You cannot remove a negative or 0 amount of cards." << endl;
        } else if (gold_card < amount) {
            cout << "You do not have enough gold cards to remove." << endl;
        } else {
            gold_card -= amount;
        }
    }

    // Add silver cards
    void AddSilver(int amount) {
        if (amount <= 0) {
            cout << "You cannot add a negative or 0 amount of cards." << endl;
        } else if (GetTotal() + amount > 20) {
            cout << "You do not have enough binder room." << endl;
        } else {
            silver_card += amount;
        }
    }

    // Remove silver cards
    void RemoveSilver(int amount) {
        if (amount <= 0) {
            cout << "You cannot remove a negative or 0 amount of cards." << endl;
        } else if (silver_card < amount) {
            cout << "You do not have enough silver cards to remove." << endl;
        } else {
            silver_card -= amount;
        }
    }

  private:
    int gold_card;   // Number of gold cards
    int silver_card; // Number of silver cards
};

int main() {
  
  // DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  // DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
}
