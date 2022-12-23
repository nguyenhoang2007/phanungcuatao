#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,l,a[1000],dist;

void solve() {
    cin >> n >> l;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    dist = a[0];
    for(int i = 1; i < n; ++i) dist = max(dist,a[i]-a[i-1]);
    dist = max(dist,l-a[n-1]);
    cout << setprecision(10);
    
    cout << max((long double)dist/2,max((long double)a[0],(long double)l-a[n-1]));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cin >> t;
    //while(t--)
        solve();
}