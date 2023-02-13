#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k;
ll t,r;
vector<ll> a(1000001),m(1000001),x = {0,0,1,1,1,0,1,1,1,0};

void f(int i) {
    if(i == n+1) {
        int c=0;
        //if(m == x) cout << "oat";
        for(int i = 0; i < n; ++i) {
            (m[i]==1?c++:c=1);
            if(c==k+1) return;
        }
        for(int i = 0; i < n; ++i) if(m[i]) cout << a[i] << ' ';
        cout << '\n';
        r = max(r,t);
        return;
    }
    f(i+1);
    t+=a[i];
    m[i] = 1;
    f(i+1);
    t-=a[i];
    m[i] = 0;
}

void solve() {
    f(0);
    cout << r;
}

void init() {
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    solve();
}