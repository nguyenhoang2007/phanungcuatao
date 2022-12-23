#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],l=0,r,c;
void solve() {
    r=n-1;
    while(l<r) {
        if(a[r]==4) r--;
        else if(a[r]+a[l]<4) {
            a[r]+=a[l];
            a[l]=0;
            l++;
        } else if(a[r]+a[l] == 4) {
            a[l]=0;
            l++;
            r--;
        } else r--;
    }
    for(int i = 0; i < n; ++i) c+=(a[i]!=0);
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_10_thithu7.inp","r",stdin);
    freopen("bai3_10_thithu7.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    solve();
}