#include <bits/stdc++.h>

using namespace std;
class Student {
private : 
  int age; 
  public: 
    void set_age(int age) {
      this->age = age; 
    }
    int get_age() {
      return age;
    }
};
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  Student s; 
  s.set_age(20);
  cout << s.get_age() << '\n';
  return 0;
}