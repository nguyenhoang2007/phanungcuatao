#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll int l,r,seg = 0,s[10000000];
void solve() {
    for(ll int i = 1; i*2 <= r; ++i) {
        for(ll int j = i*2;j <= r; j+=i) s[j] += i;
    }
    for(ll int i = l; i <= r; ++i) if(s[i] > i) seg++;
    cout << seg;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> l >> r;
    solve();
}