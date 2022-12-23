#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll n,a[200001],tree[800001],m=1,b;

void add(int l, int r) {
    l+=(m-1);
    r+=(m-1);
    while(l<=r) {
        if(l%2==1) tree[l++]++;
        if(r%2==0) tree[r--]++;
        l/=2;
        r/=2;
    }
}

void get(int k) {
    ll ans=k;
    k+=(m-1);
    for(k; k>=1; k/=2) ans+=tree[k];
    k=ans;
    cout << a[ans] << ' ';
}

void solve() {
    while(m<n) m*=2;
    for(int i = 1; i <= n; ++i) {
        cin >> b;
        get(b);
        add(b,m);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    solve();
}