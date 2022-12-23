#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[100000],len=0,mlen;
ll tmax=-10000,t=0;
void solve() {
    for(int i = 0; i < n; ++i) {
        len++;
        if(t+a[i]<a[i]) {
            t = a[i];
            len = 1;
        } else t += a[i];
        if(len > k) {
            len--;
            t-=a[i-k];
        }
        tmax = max(t,tmax);
    }
    cout << tmax;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}