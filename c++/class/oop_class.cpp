#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t; 
    while (t--) {
        int n, k; 
        cin >> n >> k;
         cout << (pow(2, n - k + 1) + 2 * (k - 1)) << '\n';
    }
    return 0;
}