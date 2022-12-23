#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000];


void solve() {
    int l=0,r=n-1;
    while(l<r) {
        if(a[l]+a[r]==0) {
            cout << a[l] << ' ' << a[r];
            return;
        }
        else if(a[l]*-1 < a[r]) r--;
        else l++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_2.inp","r",stdin);
    freopen("bai3_2.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}