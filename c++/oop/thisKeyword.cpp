#include <bits/stdc++.h>

/*
   
    1. Copy contructor  
    2. this keyword
*/

using namespace std;
class Car {
    public :    
        string name; 
        int price;
        int seats; 
        string type;
        Car (string name, int price, int seats, string type) {
            /*
                use of this operator
                this is used when member name and constructor parameter name are same
            */
            this->name = name;
            this->price = price;
            this->seats = seats;
            this->type = type;
        }
};
void print(Car c) {
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << '\n';
}
int main() {
    
    Car c1("Lamborgini", 1000000, 2, "SuperCar");
    print(c1);
    Car c2 = c1; // copy everything from c1 to c2 // this is a deep copy not shallow copy 

    print(c2);

  return 0;
}