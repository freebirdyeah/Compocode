#include <bits/stdc++.h>
using namespace std;
 

// HAD TO LOOK THIS ONE UP
// USE THE formula to calculate power of k in n!
// Learnt this back in my JEE days

int power_of_five(long long num) {
 
    int pof = 0;
 
    for (long long i = 5; i <= num; i *= 5) pof += num/i;
 
    return pof;
}
 
 
int power_of_two(long long num) {
 
    int pot = 0;
 
    for (long long i = 2; i <= num; i *= 2) pot += num/i;
    
    return pot;
}
 
 
int main() {
 
    int n;
    cin >> n;
    cout << min(power_of_five(n), power_of_two(n)) << endl;
}