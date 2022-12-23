#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll q,n,k,w,w2;
    
    cin >> q;
    while(q--) {
        cin >> n >> k;
        w = w2 = 1;
        for(int i = 0; i < k; ++i) w*=(n-i);
        for(int i = 1; i <= k; ++i) w2*=i;
        cout << w/w2 << '\n';
    }
}