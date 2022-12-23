#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,r;

void solve() {
    int a[2000];
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    r = a[n-1]-a[0];
    if(min_element(a,a+n)-a==0) r = max(r,*max_element(a+1,a+n)-a[0]);
    if(max_element(a,a+n)-a==n-1) r = max(r,a[n-1]-*min_element(a,a+n-1));
    for(int i = 0; i < n-1; ++i) r = max(r,a[i]-a[i+1]);
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}