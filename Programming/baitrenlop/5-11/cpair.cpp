#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[10000000],k,l,r,ans=0;
void solve() {
    l=0;
    r=n-1;
    while(a[r]>k) r--;
    while(a[r]+a[l]<k) l++;
    while(l<r) {
        if(a[r]==k) {
            ans++;
            r--;
            continue;
        }
        if(a[l]+a[r]==k) {
            while(a[l]==a[l+1] && l<r) l++;
            ans+=(l+1);
            r--;
        } else if(a[l]+a[r]>k) r--;
        else l++;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("cpair.inp","r",stdin);
    freopen("cpair.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}