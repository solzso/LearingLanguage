#include <bits/stdc++.h>

/*
    Function inside class 
*/

using namespace std;
class Car
{
public:
    string name;
    int price;
    int seats;
    string type;
    Car()
    {
        // Default constructor.
    }
    Car(string n, int p, int s, string t)
    { // Parameterted constructor.
        name = n;
        price = p;
        seats = s;
        type = t;
    }
    void print()
    {
        cout << name << " " << price << " " << seats << " " << type << '\n';
    }
};
int main()
{
    
    Car c1("Lamborgini", 1000000, 2, "SuperCar");
    c1.print();
    Car c2(c1);
    c2.name = "F1", 
    c2.seats = 1;
    c2.print();
    return 0;
}