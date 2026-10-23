#include <bits/stdc++.h>

using namespace std;

class Vehicle {
  public : 
    int topSpeed; 
    float millage; 
    int price; 
    string fuel; 
};

class TwoWheeler : public Vehicle{
  public :
    int gear; 
};

// parent -> child -> grandchild 
// vehicle -> TwoWheeler -> Car, Bike

class Bike : public TwoWheeler{
  public :
    int gear; 
};
class Car : public TwoWheeler{
  public :
    // int gear; 
    bool sunroof; 
};


int main() {
  

  return 0;
}