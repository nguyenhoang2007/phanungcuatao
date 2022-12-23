#include<bits/stdc++.h>

using namespace std;

#define ll long long

string s;
int q,l,r,t = 0,dpl[100000]={},dpr[100001] = {};

void solve() {
    cin >> l >> r;
    cout << t-dpl[l-1]-dpr[r] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s >> q;
    for(int i = 0; i < s.size()-1; ++i) if(s[i] == s[i+1]) t++;
    for(int i = 1; i <= s.size(); ++i) {
        dpl[i] = dpl[i-1];
        if(s[i-1] == s[i]) dpl[i]++;
    }
    for(int i = s.size()-1; i >= 1; --i) {
        dpr[i] = dpr[i+1];
        if(s[i-1] == s[i]) dpr[i]++;
    }
    while(q--) solve();
}