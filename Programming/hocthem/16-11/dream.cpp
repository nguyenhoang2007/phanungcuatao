#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll n,k,c[100000],ans=0,keep;

struct arr {
    int val,pos;
} a[100000];

bool compare(arr x, arr y) {
    return (x.val < y.val);
}

void solve() {
    sort(a,a+n,compare);
    for(int i = 0; i < n; ++i) {
        if((i == 0 || a[i].val != a[i-1].val) ||
           (a[i].pos >= keep && a[i].val==a[i-1].val)) {
            ans++;
            keep=a[i].pos+k;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dream.inp","r",stdin);
    freopen("dream.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].pos = i;
    }
    solve();
}