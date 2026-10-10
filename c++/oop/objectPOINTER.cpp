#include <bits/stdc++.h>

/*

    object pointer 

*/

using namespace std;
class Car {
public:
    string name;
    int price;
    int seats;
    string type;
    Car() {
        // Default constructor.
    }
    Car(string n, int p, int s, string t) { // Parameterted constructor.
        name = n;
        price = p;
        seats = s;
        type = t;
    }
    void print() {
        cout << name << " " << price << " " << seats << " " << type << '\n';
    }
};
int main() {
    
    Car c1("Lamborgini", 1000000, 2, "SuperCar");
    Car* p1 = &c1;
    
    p1->print(); // (*p1).print();

    p1->type = "SportCar";    // (*p1).type = "SportCar";

    c1.print();


    return 0;
}