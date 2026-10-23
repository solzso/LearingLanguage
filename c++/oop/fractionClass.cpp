#include <bits/stdc++.h>

using namespace std;
class Fraction {
public: 
  int num; 
  int den; 
  Fraction(int num, int den) {
    this->num = num;
    this->den = den; 
  }
  void show() {
    cout << num  << " / " << den << '\n';
  }
  Fraction operator+(Fraction f) {
    int newNum = this->num*f.den + f.num*this->num; 
    int newDen = this->den * f.den; 
    Fraction ans(newNum, newDen);
    return ans; 
  }
  Fraction operator-(Fraction f) {
    int newNum = this->num*f.den - f.num*this->num; 
    int newDen = this->den * f.den; 
    Fraction ans(newNum, newDen);
    return ans; 
  }
  Fraction operator*(Fraction f) {
    int newNum = this->num * f.num; 
    int newDen = this->den * f.den; 
    Fraction ans(newNum, newDen);
    return ans; 
  }
  Fraction operator/(Fraction f) {
    int newNum = this->num*f.den + f.num*this->num; 
    int newDen = this->den * f.den; 
    Fraction ans(newNum, newDen);
    return ans; 
  }

  // find scf

  // simply the fraction


};
int main() {

  Fraction f1(1, 2);
  Fraction f2(1, 3);
  f1.show();
  f2.show();
  // Fraction f3 = f1.add(f2);
  Fraction f3 = f1 + f2;
  f3.show();
  return 0;
}