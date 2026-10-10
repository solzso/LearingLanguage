#include <bits/stdc++.h>

/*
    1. Default constructor 
    2. Parameter Constructor
*/

using namespace std;
class Car {
    public :    
        string name; 
        int price;
        int seats; 
        string type;
        Car() {
            // Default constructor. 
        }
        Car (string n, int p, int s, string t) { // Parameterted constructor. 
            name = n;
            price = p;
            seats = s;
            type = t;
        }

};
void print(Car c) {
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << '\n';
}
int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
    // Car c1, c2, c3;
    
    Car c1("Lamborgini", 1000000, 2, "SuperCar");
    print(c1);

    // c1.name = "Lamborgini";
    // c1.price = 100000;
    // c1.seats = 2; 
    // c1.type = "SuperCar";
    





    Car c2; 
    c2.name = "F1";
    c2.price = 2000000;
    c2.seats = 1; 
    c2.type = "SportsCar";
    
    print(c2);

    // c3.name = "Rolls Royace";
    // c3.price = 1000000;
    // c3.seats = 4; 
    // c3.type = "Luxuary";

    // print(c1);
    // print(c2);
    // print(c3);

  return 0;
}