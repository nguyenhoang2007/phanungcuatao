#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
using namespace std;

int n,a[1000001],c=0,t=0;
map<ll,int> s; 
void solve() {
    s[0]++;
    for(int i = 0; i < n; ++i) {
        t+=a[i];
        c+=s[t];
        s[t]++;
    }
    cout << 0;
}

void read() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("         .inp","r",stdin);
    //freopen("         .out","w",stdout);
    read();
    solve();
    #ifdef ONPC
    cout << "\nn" << ((double)clock())/CLOCKS_PER_SEC << " seconds\n";
    #endif
}
