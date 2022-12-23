#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int t,a[200000],n;
 
void solve() {
    int dist = 1,same = 1,upto = 1;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    for(int i = 1; i < n; ++i) {
        if(a[i] > a[i-1]) dist++;
        if(a[i] == a[i-1]) upto++;
        else upto = 1;
        same = max(same,upto);
    }
    if(same>dist) cout << dist << '\n';
    else if(dist>same) cout << same << '\n';
    else cout << same-1 << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}