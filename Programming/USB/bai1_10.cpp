#include <bits/stdc++.h>

#define ll long long
using namespace std;

int n,k,a[1000000],l=0,r=0;
ll total;

void solve() {
    total = a[0];
    //cout << l << ' ' << r << ' ' << total << '\n';
    while(r < n) {
        if(total < k) {
            r++;
            total += a[r];
        }
        else if(total > k) {
            total -= a[l];
            l++;
        }
        else {
            cout << "YES";
            return;
        }
        if(l > r) {
            r++;
            l = r;
            total = a[r];
        }
    }
    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10.inp","r",stdin);
    freopen("bai1_10.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}
