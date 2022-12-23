#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool rev(int a, int b) {
    return a>b;
}
int a[100000];
ll t,n,x,m,total;

void solve() {
    total = 0, m = 0;
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n,rev);
    //for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    //cout << '\n';
    for(int i = 0; i < n; ++i) {
        total += a[i];
        m++;
        if(total < x*m) {
            cout << m-1 << '\n';
            return;
        }
    }
    cout << m << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}