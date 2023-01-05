#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,m,a[100000],b[100000];
void solve() {
    ll t = 0,i=0,j=0;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m,greater<int>());
    while(j < m) {
        if(a[i]<b[j]) a[i++] = b[j++];
        else if(a[i]>b[j]) break;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}