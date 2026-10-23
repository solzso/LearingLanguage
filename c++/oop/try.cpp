#include <bits/stdc++.h>

/*
   Dynamic memory allowcation 
*/

#define x 100

#typedef x 100

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
            
            this->type = type;
        }
        void print() {
            cout << name << " " << price << " " << type << '\n';
    }
};


enum Day {
    Saturday = 1, 
    Sunday, Monday, Tuesday
}

int sum(int a, int b)
int main() {
    // int *ptr = new int(4);
    // cout << *ptr << '\n';


    sum(1, 4);
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s; 

    
    Car c1("Lamborgini", 1000000, 2, "SuperCar");
    
    c1.print();
    
    Car* c2 = new Car("Ferrari", 1000000, 2, "SuperCar");
    c2->print();
    
    Car* c3  = new Car("F1", 1000000, 1, "SportCar");
    c3->print();
    
    int x = 4444; 
    
    std::vector<int> v;
    v.push_back(1);

    cout << x; 

    x += 2; 


    return 0;
}