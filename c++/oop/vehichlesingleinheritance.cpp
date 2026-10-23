#include <bits/stdc++.h>

using namespace std;

class Vehicle {
  public : 
    int topSpeed; 
    float millage; 
    int price; 
    string fuel; 
};

class Bike : public Vehicle{
  public :
    int gear; 
};
class Car : public Vehicle{
  public :
    // int gear; 
    bool sunroof; 
};
class Truck : public Vehicle{
  public :
    // int gear; 
    bool loadspace; 
};

int main() {
  

  return 0;
}