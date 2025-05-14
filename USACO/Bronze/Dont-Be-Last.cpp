#include <bits/stdc++.h>
using namespace std;


// 7 dairy cows: Bessie, Elsie, Daisy, Gertie, Annabelle, Maggie, and Henrietta

int main() {

    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    
    int t, milk_num;
    set<int> milk_prod_count;
    string cow_name;
    map<string, int> cow_prod;
    
    cow_prod["Bessie"] = 0;
    cow_prod["Elsie"] = 0;
    cow_prod["Daisy"] = 0;
    cow_prod["Gertie"] = 0;
    cow_prod["Annabelle"] = 0;
    cow_prod["Maggie"] = 0;
    cow_prod["Henrietta"] = 0;

    cin >> t;

    while (cin >> cow_name) {
        cin >> milk_num;
        cow_prod[cow_name] += milk_num;
    }

    for (auto p: cow_prod) milk_prod_count.insert(p.second);
    int second_smallest_prod;

    if (milk_prod_count.size() > 1) {
        second_smallest_prod = *next(milk_prod_count.begin());
    }
    else {
        cout << "Tie" << endl;
        return 0;
    }

    set<string> ssp_cows;

    for (auto p: cow_prod) {
        if (p.second == second_smallest_prod) {
            ssp_cows.insert(p.first);
        }
    }

    if (ssp_cows.size() == 1) cout << *(ssp_cows.begin()) << endl;
    else cout << "Tie" << endl;
    return 0;
}