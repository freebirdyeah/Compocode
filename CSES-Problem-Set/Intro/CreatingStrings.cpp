#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
 
    string inp;
    set<string> perms;
 
    getline(cin >> ws, inp);
    sort(inp.begin(), inp.end());
 
    do
    {
        perms.insert(inp);
    } while (next_permutation(inp.begin(), inp.end()));
 
    cout << perms.size() << endl;
    for (auto &perm: perms) {cout << perm << endl;}
    return 0;
}