#include <bits/stdc++.h>
using namespace std;
 
 
// damn the solution was very simple, just print all the even numbers first and then the odds
// https://www.geeksforgeeks.org/cses-solutions-permutations/
 
 
int main() {
 
    int n;
    cin >> n;
 
    // no beautiful permutations for 2 or 3
 
    if (n == 3 || n == 2) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
 
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    
    return 0;
}