#include <bits/stdc++.h>

using namespace std;

class Loading {
public: 
  void sum(int a, int b) {
    cout << a + b << '\n';
  }

/**
 * @attention : Can not create a function overloading by just changing the return type. But can be created changing the parameter and their type. 
 * 

*/

  // int sum(int a, int b) {
  //   return a + b; 
  // }
  
  void sum(string a, string b) {
    cout << a + " " + b << '\n';
  }
  void sum(int a, int b, int c) {
    cout << a + b << '\n';
  }
};

int main() {
  Loading a;
  a.sum(10, 10);
  a.sum(1, 2, 5);
  a.sum("hello", "World");

  return 0;
}