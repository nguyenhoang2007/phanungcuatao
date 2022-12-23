#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,fact,h,n,l,p;

void solve() {
    fact = 1,p = 0;
    cin >> n;
    while(n > 0) {
        p++;
        h = 1;
        for(int i = 1; 3*h-i < n; ++i) {
            h*=i;
            l=i;
        }
        if(n - 3*h-l >= 0) n -= 3*h-l;
    }
    cout << p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}