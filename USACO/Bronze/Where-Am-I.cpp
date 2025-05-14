#include <bits/stdc++.h>
using namespace std;


/*

SOLUTION: Create a sliding window of k length, count the frequency of each k-length substring
obtained from the word. If any substring has a frequency of more than 1 then it cannot be used
to uniquely determine the farmer's position on the road.

*/

int main() {

    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    string testcase;
    int N;

    while(cin >> N) {

        getline(cin >> ws, testcase);
        int i;

        for (i = 1; i <= testcase.length(); i++) {
            map<string, int> sequence_frequency;
            bool checker = true;

            for (int j = 0; j <= testcase.length() - i; j++) {
                sequence_frequency[testcase.substr(j, i)]++;
            }

            for (auto kv: sequence_frequency) {
                if (kv.second != 1) checker = false;
            }

            if (checker) {
                cout << i << endl;
                break;
            }
        }
    }

    return -1;
}