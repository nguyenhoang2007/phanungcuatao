#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],k,l;
ll t,maxt;
void solve() {
    for(int i = 0; i < n; ++i) {
        if(t + a[i] > a[i]) {
            t += a[i];
            l++;
        } else {
            t = a[i];
            l=1;
        }
        maxt = max(maxt,t);
        if(l == k) t-=a[i-(--l)];
    }
    cout << maxt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("daycon4.inp","r",stdin);
    freopen("daycon4.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}