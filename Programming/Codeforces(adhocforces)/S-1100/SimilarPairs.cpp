#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,a[100000],x,y;

void solve() {
    x = 0,y=0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i]%2 == 0) y++;
        else x++;
    }
    if(x%2 == 0) cout << "YES\n";
    else {
        sort(a,a+n);
        for(int i = 1; i < n; ++i) if(a[i]-a[i-1]==1) {cout << "YES\n";return;}
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}