#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    // Problem: find the no.of ways two knights don't attack each other 
    // HAD TO LOOK THIS ONE UP
    // I knew that n(cases in total) - n(cases they attack) = n(cases they dont attack)
    // the logic is that knights only attack each other if they are in 3x2 or 2x3 shape
    // the total no.of cases = ((k^2)(k^2 - 1)/2 (divide by 2 since both knights are identical)
    // now we basically need to find how many 3x2 and 2x3 boxes can we get out of a KxK chessboard
    // and each 2x3/3x2 box will have 2 possible attacking positions inside it
    // for a KxK chessboard, if we take a 2x3 box then we can get (K-1)*(K-2) possible boxes
    // if we take a 3x2 box then also we will get the same amount:(K-1)*(K-2)
    // total no.of attacking positions = 2*2*(K-1)*(K-2)
 
    long long k;
    cin >> k;
 
    for (long long i = 1; i <= k; i++)
    {
        long long total_cases = (i*i*(i*i - 1))/2;
        long long attack = 4*(i-1)*(i-2);
        cout << total_cases - attack << endl;
    }
 
    return 0;
}