#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[200000],t,temp[100000],c1,c2;

void solve() {
    //cout << "mmb\n";
    c1 = 0,c2 = 1;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    if(n%2 == 1) {
        cout << "NO\n";
        return;
    } else {
        bool circle = 1;
        sort(a,a+n);
        for(int i = 0; i < n; ++i) {
            if(i < n/2) {
                temp[c1] = a[i];
                c1 += 2;
            } else {
                temp[c2] = a[i];
                c2 += 2;
            }
        }
        for(int i = 0; i < n-1; ++i) {
            if(i%2 == 0 && temp[i] >= temp[i+1]) circle = false;
            if(i%2 == 1 && temp[i] <= temp[i+1]) circle = false;
        }
        if(circle) {
            cout << "YES\n";
            for(int i = 0; i < n; ++i) cout << temp[i] << ' ';
            cout << '\n';
        } else cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}