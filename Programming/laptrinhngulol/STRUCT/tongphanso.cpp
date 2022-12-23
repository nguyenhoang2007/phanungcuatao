#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll a,b,c,d,r1,r2,u;

ll ucln(ll m, ll n) {
    while(m >= 1 && n >= 1) {
        if(m > n) m %= n;
        else n %= m;
    }
    return max(m,n);
}

void solve() {
    r1 = a*d + b*c;
    r2 = b*d;
    u = ucln(r1,r2);
    r1 /= u;
    r2 /= u;
    cout << r1 << ' ' << r2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c >> d;
    double start = clock();
    solve();
    double end = clock();
    cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}