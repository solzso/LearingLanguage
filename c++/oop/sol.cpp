#include <bits/stdc++.h>

using namespace std;
class Student {
public: 
  string name;   
private : 
  int age;
public : 
  
  void setage(int age) {
    this->age = age;
  }

  void display() {
    cout << name << " " << age << '\n';
  }
};

int sum(int a, int b);
int main() {
  Student s1; 
  s1.name = "Shanto";
  s1.setage(20);
  s1.display();

  int a = sum(2, 4);

  
  return 0;
}