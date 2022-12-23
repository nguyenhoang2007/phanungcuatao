#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000],l=INT_MAX;
void solve() {
    sort(a,a+n,greater<int>());
    for(int i = 0; i < n; ++i) {
        if(i >= l) {
            cout << i+1;
            return;
        }
        l = min(l,i+a[i]);
    }
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("gach.inp","r",stdin);
    //freopen("gach.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}