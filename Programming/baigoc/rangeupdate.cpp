#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll n,a[200001],q,tree[800001],m=1,qtype,l,r,k,u;

void add(int l, int r, int u) {
    l+=(n-1);
    r+=(n-1);
    while(l<=r) {
        if(l%2==1) tree[l++]+=u;
        if(r%2==0) tree[r--]+=u;
        l/=2;
        r/=2;
    }
}

void get(int k) {
    ll ans=a[k];
    k+=(n-1);
    for(k; k>=1; k/=2) ans+=tree[k];
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    while(m<n) m*=2;
    n=m;
    while(q--) {
        cin >> qtype; 
        if(qtype==1) {
            cin >> l >> r >> u;
            add(l,r,u);
        } else {
            cin >> k;
            get(k);
        } 
    }
}