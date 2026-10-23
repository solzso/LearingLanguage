#include <bits/stdc++.h>

using namespace std;
class BankAccount{
private: 
  double balance; 
public: 
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
    }
  }
  double get_balance() {
    return balance; 
  }
};
int main() {
  BankAccount p1; 
  p1.deposit(1000.00);
  double total_balance = p1.get_balance();
  cout << total_balance << '\n';
  return 0;
}