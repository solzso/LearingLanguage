#include <bits/stdc++.h>

using namespace std;

enum Day {
  Saturday, 
  Sunday, 
  Monday, 
  Tuesday, 
  Wednessday, 
  Thrusday, 
  Friday
};

int main() {
  
  // Day today = Wednessday;
  Day today = Saturday;

  cout << today + 1 << '\n';
  
  return 0;
}