#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
    cin.tie(NULL);
    ll fibo[1001],n,t;
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 1000; ++i) fibo[i] = fibo[i-1] + fibo[i-2];
    while(cin >> n) {
        cout << fibo[n] << '\n';
    }
}