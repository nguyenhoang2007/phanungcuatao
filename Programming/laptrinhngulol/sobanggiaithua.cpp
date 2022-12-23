#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll gt[20],t,x;
    cin >> t;
    gt[1] = 1;
    for(int i = 2; i < 20; ++i) gt[i] = gt[i-1]*i;
    while(t--) {
        cin >> x;
        if(binary_search(gt,gt+20,x)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}