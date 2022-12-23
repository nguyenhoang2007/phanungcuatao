#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int t,n,a[200000],s[200000];
 
void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = n-1; i >= 0; --i) {
        if(i+a[i]>=n) s[i] = a[i];
        else s[i] = a[i] + s[i+a[i]];
    }
    cout << *max_element(s,s+n) << '\n';
    //for(int i = 0; i < n; ++i) cout << s[i] << ' ';cout << '\n';  
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> t;
    while(t--)
        solve();
}