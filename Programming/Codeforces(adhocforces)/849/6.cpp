#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
 
ll test_case,n,a[200001],q,tree[800001],d[200001],m=1,qtype,l,r,k,u;
 
ll dig(ll x) {
    ll t=0;
    while(x>0) {
        t+=(x%10);
        x/=10;
    }
    return t;
}

void add(ll l, ll r, ll u) {
    l+=(n-1);
    r+=(n-1);
    while(l<=r) {
        if(l%2==1) tree[l++]++;
        if(r%2==0) tree[r--]++;
        l/=2;
        r/=2;
    }
}
 
void get(ll k) {
    ll ans=a[k],i=k,c=0;
    k+=(n-1);
    for(k; k>=1; k/=2) c+=tree[k];
    while(c--) ans = dig(ans);
    cout << ans << '\n';
}
 
void solve() {
    cin >> n >> q;
    for(ll i = 1; i <= 4*n; ++i) tree[i] = 0;
    for(ll i = 1; i <= n; ++i) cin >> a[i];
    while(m<n) m*=2;
    n=m;

    while(q--) {
        cin >> qtype; 
        if(qtype==1) {
            cin >> l >> r;
            add(l,r,u);
        } else {
            cin >> k;
            get(k);
        } 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
    }
}