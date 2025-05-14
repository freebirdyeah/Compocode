#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 
// Here's how I think
// let's say 
// a b is given
// we need to do  -2 -1 or -1 -2 to make it 0 0
// if we subtract 2 from the first pile then we have to subtract one from the other and vice-versa
// let x be the number of first type moves, y be the number of second type moves
// a - (2x + y) = 0
// b - (x + 2y) = 0
// if positive integers exist for x and y then it should all work out
// y = (2b - a)/3
// x = (2a - b)/3
 
 
void solver(ll a, ll b) {
 
    bool x_is_int, y_is_int;
 
    if ((2*a - b) % 3 == 0 && (2*a - b) >= 0) x_is_int = true;
    else x_is_int = false;
    if ((2*b - a) % 3 == 0 && (2*b - a) >= 0) y_is_int = true;
    else y_is_int = false;
 
 
    if (x_is_int && y_is_int) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
 
 
 
int main() {
 
    ll t, x, y;
    cin >> t;
    ll arr[t][2];
 
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }
 
    for (int i = 0; i < t; i++) solver(arr[i][0], arr[i][1]);
}