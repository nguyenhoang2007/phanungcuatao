#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll ucln(ll m, ll n) {
    while(m >= 1 && n >= 1) {
        if(m > n) m %= n;
        else n %= m;
    }
    return max(m,n);
}

ll a[100000],b[100000],m = 0,ta = 1,tb = 1,u;
void solve() {
    //sort(a,a+m-1);
    //sort(b,b+m-1);
    for(int i = 0; i < m; ++i) ta *= a[i];
    for(int i = 0; i < m; ++i) tb *= b[i];
    u = ucln(ta,tb);
    ta /= u;
    tb /= u;
    cout << ta << ' ' << tb;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n; while(n--) {
    //while(!cin.eof()) {
        cin >> a[m] >> b[m];
        m++;
    }
    double start = clock();
    solve();
    double end = clock();
    //cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}