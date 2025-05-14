#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
 
    long long int size;
    cin >> size;
    long long int arr[size];
    long long int moves = 0;
 
 
    for (int i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]);
    }
 
 
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i-1]) {
            moves += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    
    cout << moves;
 
 
    return 0;
}