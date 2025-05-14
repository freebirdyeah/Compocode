#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
 
    string s;
    getline(cin >> ws, s);
    long long current_char_count = 0, rep_count = 0;
    char current_char = s[0];
 
    for (auto ch: s) {
 
        if (ch == current_char) {
            current_char_count++;
            rep_count = max(current_char_count, rep_count);
        }
 
        else {
            current_char = ch;
            current_char_count = 1;
        }
    }
 
    cout << rep_count;
}