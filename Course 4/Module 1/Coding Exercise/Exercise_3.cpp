#include <iostream>
using namespace std;

class Song {
  public:
    // Parameterized constructor
    Song(string a, string t, string al) : artist(a), title(t), album(al) {}

    // Getter for artist
    string GetArtist() const {
        return artist;
    }

    // Setter for artist
    void SetArtist(const string& a) {
        artist = a;
    }

    // Getter for title
    string GetTitle() const {
        return title;
    }

    // Setter for title
    void SetTitle(const string& t) {
        title = t;
    }

    // Getter for album
    string GetAlbum() const {
        return album;
    }

    // Setter for album
    void SetAlbum(const string& al) {
        album = al;
    }

    // Getter for play_count
    int GetPlayCount() const {
        return play_count;
    }

    // Getter for pay_rate
    double GetPayRate() const {
        return pay_rate;
    }

    // Getter for money_earned
    double GetMoneyEarned() const {
        return money_earned;
    }

    // Function to update play count and money earned
    void Play(int plays) {
        for (int i = 0; i < plays; ++i) {
            UpdatePlayCount();
            UpdateMoneyEarned();
        }
    }

    // Function to print all attributes
    void Stats() const {
        cout << artist << endl;
        cout << title << endl;
        cout << album << endl;
        cout << play_count << endl;
        cout << pay_rate << endl;
        cout << money_earned << endl;
    }

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;

    void UpdatePlayCount() {
        play_count++;
    }

    void UpdateMoneyEarned() {
        money_earned = play_count * pay_rate;
    }
};

// DO NOT EDIT CODE BELOW THIS LINE

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}
