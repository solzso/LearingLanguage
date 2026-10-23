#include <bits/stdc++.h>

using namespace std;

void Binary_to_Decimal(int n) {
  int ans = 0; 
  int pow = 1;
  while (n > 0) {
    /*
        
      1 0 1

      (1 * 2 ^ 2) + (0 * 2 ^ 1)  + (1 * 2 ^ 0)

      ans += pow * n % 10 

      Meaning multiply the current bit with the power of 2 ^ i. 
      

    */ 
    ans += (pow * n % 10);

    n /= 10; 
    pow *= 2; 

  }
  cout << ans << '\n';
}

int main() {
  int n; 
  cin >> n; 
  Binary_to_Decimal(n);
  return 0;
}