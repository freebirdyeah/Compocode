#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
vector<ll> all_ans{};
 
 
void divisions(ll indx, const vector<ll> apples, ll sum1, ll sum2) {
 
    if (indx == size(apples)) {
        all_ans.push_back(abs(sum1 - sum2));
        return;
    }
 
    divisions(indx + 1, apples, sum1 + apples[indx], sum2);
    divisions(indx + 1, apples, sum1, sum2 + apples[indx]);
}
 
 
int main() {
 
 
    // create two baskets
    // keep adding weights to baskets with apple going to A or B
    // keep generating all possible divisions
    // then when all apples covered, store abs(weight A - weight B)
    // return min_element from the vector
    
    ll num;
    cin >> num;
 
    vector<ll> apples(num);
    for (auto &apple: apples) {cin >> apple;}
 
    divisions(0, apples, 0, 0);
    cout << *min_element(all_ans.begin(), all_ans.end()) << endl;
    return 0;
}