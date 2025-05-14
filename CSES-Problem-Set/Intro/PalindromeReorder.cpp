#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    map<char, int> frequency_map;
 
    string s;
    getline(cin >> ws, s);
 
    for (auto i: s)
    {
        frequency_map[i]++;
    }
 
    long long palindrome_checker = 0;
 
    for (auto& pair: frequency_map) {
        if (pair.second%2 != 0) {
            palindrome_checker++;
        }
    }
 
    if (palindrome_checker != 0 && !(palindrome_checker == 1 && size(s)%2 != 0)) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
 
    string middle_char = "";
    string half_string = "";
 
    for (auto& pair: frequency_map)
    {
        if (pair.second % 2 == 0) {
            for (int i = 0; i < pair.second/2; i++) {
                half_string += pair.first;
            }
        }
 
        else {
            for (int i = 0; i < pair.second; i++) {
                middle_char += pair.first; 
            }
        }   
    }
 
    string palindrome = half_string + middle_char;
    reverse(half_string.begin(), half_string.end());
    palindrome += half_string;
    cout << palindrome;
}