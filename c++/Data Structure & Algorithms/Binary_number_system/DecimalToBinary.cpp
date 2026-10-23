#include <bits/stdc++.h>

using namespace std;

void DeciToBin(int n) {
  int pow = 1;
  int ans = 0;
  while (n > 0) {

    /*
    
       How it work : 
    
      Example : 
        
      3 convert to binary 

      2|3| 1   // 1 * 10 ^ 0(pow)
      2|1| 1   // 1 * 10 ^ 2 (pow)   
        0      

         1(for 3)   1 (for 1)

         At first ans = 1; 

         To get it reverse 
              next we have to add the next bit to it before the last bit (1 1)

            --> To do that we have multiply the current bit with 10 and add with previous bit
                  ---> current bit * 10 + previus bit (which is the ans variable)

                  **** 

                  ans +=pow * (n % 2);

        // can not divide further. 
        Reverse of the remiander is the answer. 
    */




    ans += (pow * (n % 2));


    n /= 2; 
    pow = pow * 10;
  }
  cout << ans << '\n';
}

int main() {
  int n; 
  cin >> n; 
  DeciToBin(n);  
  return 0;
}