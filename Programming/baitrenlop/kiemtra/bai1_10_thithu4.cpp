#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll n,a[100000],k,c = 0;
static bool d[100000] = {};

void solve() {
    for(int i = 0; i < n; ++i) a[i]%=k;
    for(int i = 0; i < n; ++i) {
        d[a[i]] = true;
    }
    for(int i = 1; i < 100000; ++i) {
        if(d[i]) c++;
    }
    cout << c;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai1_10_thithu4.inp","r",stdin);
    //freopen("bai1_10_thithu4.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}