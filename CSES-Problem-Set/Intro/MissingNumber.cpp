#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    long long int n;
    long long int sum = 0;
 
    cin >> n;
    long long int arr[n-1];
 
    for (int i = 0; i < n-1; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
 
    long long int num = (n*(n+1))/2 - sum;
    printf("%lld", num);
 
    return 0;
