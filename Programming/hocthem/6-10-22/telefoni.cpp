#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,d,a[1000000],c=0;
void solve() {
    for(int i = 0; i < n; ++i) {
        if(a[i]==0) {
            c++;
            i+=d;
            i--;
        }
        cout << i << ' ';
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("telefoni.inp","r",stdin);
    freopen("telefoni.out","w",stdout);
    cin >> n >> d;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}