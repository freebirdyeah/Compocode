#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()  {
 
    ll n;
    cin >> n;
 
    // if the sum of nums till n is odd then splitting into two sets is impossible
    // if spliting is possible, then start with set1, fill it with n, then check (sum_set - n)
    // if (sum_set - n) is available then add it to set1 be done and add rest of the elements to set2
    // otherwise add (n-1) and go on
    // keep doing this until (sum_set - n) is available or = 0
 
    if ((n*(n+1)/2)%2 != 0) {
        cout << "NO";
        return 0;
    }
 
    vector<ll> set1;
    vector<ll> set2;
    ll sum_set = (n*(n+1))/4;
    ll checker = 0;
 
    cout << "YES" << endl;
 
    for (ll i = n; i > 0; i--) {
        set1.push_back(i);
        checker += i;
        if ((sum_set - checker) < i)  {
            if ((sum_set - checker) != 0) set1.push_back((sum_set - checker));
 
            for (ll j = i-1; j>0; j--) {
                if (j != sum_set - checker) set2.push_back(j);
            }
            break;
        }
    }
 
    cout << size(set1) << endl;
    for (auto i: set1)
    {
        cout << i << " ";
    }
 
    cout << '\n';
    cout << size(set2) << endl;
    for (auto i: set2) {
        cout << i << " ";
    }    
}