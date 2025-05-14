#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 

ll square_locator(ll x, ll y) {
    return max(x, y);
}
 
 
ll solver(ll x, ll y) {
 
    ll square_grid = powl(square_locator(x, y), 2);
    
    if (square_grid % 2 == 0) {
        ll s_row = sqrtl(square_grid), s_col = 1;

        // nearest square box will be at the bottom left corner
        // x and y coords of the element are given AND will be on the L shape section
        // start incrementing right then up
 
        while (s_col != y) {
            s_col++;
            square_grid--;
        }
 
        while (s_row != x) {
            s_row--;
            square_grid--;
        }
 
        return square_grid;
    }
 
    else {
        ll s_row = 1, s_col = sqrt(square_grid);

        // nearest square box will be at top right corner
        // x and y coords of the element are given AND will be on THE L shape section we are looking at
        // start decrementing down and then left
 
        while (s_row != x) {
            s_row++;
            square_grid--;
        }
 
        while (s_col != y) {
            s_col--;
            square_grid--;
        }
 
        return square_grid;
    }
}
 
 
int main() {
 
    ll t, x, y;
    cin >> t;
    ll test_arr[t][2];
 
    for (ll i = 0; i < t; i++)
    {
        cin >> x >> y;
        test_arr[i][0] = x;
        test_arr[i][1] = y;
        // cout << solver(x, y);
    }
 
    for (ll i = 0; i < t; i++) {
 
        cout << solver(test_arr[i][0], test_arr[i][1]) << endl;
    }  
}