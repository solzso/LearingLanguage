#include <bits/stdc++.h>

/*
   Dynamic memory allowcation 
*/

using namespace std;
class Car {
    public :    
        string name; 
        int price;
        int seats; 
        string type;
        Car (string name, int price, int seats, string type) {
            this->name = name;
            this->price = price;
            this->seats = seats;
            this->type = type;
        }
        void print() {
        cout << name << " " << price << " " << seats << " " << type << '\n';
}
};


int main() {
    // int *ptr = new int(4);
    // cout << *ptr << '\n';

    Car c1("Lamborgini", 1000000, 2, "SuperCar");
    
    c1.print();
    
    Car* c2 = new Car("Ferrari", 1000000, 2, "SuperCar");
    c2->print();
    
    return 0;
}