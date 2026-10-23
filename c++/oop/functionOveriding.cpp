#include <bits/stdc++.h>

using namespace std;

class Scooty {
  public : 
    int topSpeed; 
    float millage; 
    void sound() {
      cout << "Vroom Vroom" << '\n';
    }
  private : 
    // int price;
    int bootspace; 
};

class Bike : public Scooty {
  public :
    int gear; 
    void sound() {
      cout << "Dhroom Dhroom" << '\n';
    }
};

int main() {
  Bike b;
  b.topSpeed = 150;
  b.gear = 5; 
  b.millage = 70; 
   
  

  return 0;
}