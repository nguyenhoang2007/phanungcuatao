#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m,s1[1000001],s2[1000001],k1,k2,t,r=0;
vector<ll> a(35);

void t1(int i) {
    if(i == n/2) {
        s1[k1++] = t%m;
        return;
    }
    t1(i+1);
    t+=a[i];
    t1(i+1);
    t-=a[i];
}

void t2(int i) {
    if(i == n) {
        s2[k2++] = t%m;
        return;
    }
    t2(i+1);
    t+=a[i];
    t2(i+1);
    t-=a[i];
}

void solve() {
    t1(0);
    t=0;
    t2(n/2);
    sort(s2,s2+k2);
     for(int i = 0; i < k1; ++i) {
        int k = lower_bound(s2,s2+k2,m-1-s1[i])-s2;
        //cout << k << ' ';
        r = max(max((s1[i]+s2[k])%m,
                   ((s1[i]+s2[max(0,k-1)])%m)),r);
    }
    cout << r;
}

void init() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("maxsub.inp","r",stdin);
    freopen("maxsub.out","w",stdout);
    init();
    solve();
}