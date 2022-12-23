#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test,n,m,x;
double a[100000],t[100000],dress,r,temp;
void solve() {
    x=0;
    dress = 0;
    r = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        r += a[i];
    }
    for(int i = 0; i < n; ++i) cin >> t[i];
    r/=n;
    for(int i = 0; i < n; ++i) {
        if(abs(r-a[x])+t[x]<abs(r-a[i])+t[i]) x=i;
    }
    cout << a[x]-abs(r-a[x])+t[x] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test;
    while(test--) solve();
}