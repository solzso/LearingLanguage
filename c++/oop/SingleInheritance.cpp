#include <bits/stdc++.h>

using namespace std;

class Scooty {
  public : 
    int topSpeed; 
    float millage; 
  private : 
    // int price;
    int bootspace; 
};

class Bike : public Scooty {
  public :
    int gear; 
};

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  
  Bike b;
  b.topSpeed = 150;
  b.gear = 5; 
  b.millage = 70; 
  


  return 0;
}