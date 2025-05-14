#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
   // This required me to lookup properties of mod 
   // (a*b) mod m = ((a mod m)*(b mod m)) mod m

   long long n;
   cin >> n;
   const long long MOD = 1000000007;
   long long res = 1;
   
   for (int i = 0; i < n; i++)
   {
    res = ((res % MOD)*(2 % MOD)) % MOD;
   }
   
    cout << res << endl;
    return 0;
}
