#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[300000],l;
void solve() {
    l = a[0];
    for(int i = 1; i < n; ++i) {
        if(a[i] == l+1) l++;
    }
    cout << n-l;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("booksort.inp","r",stdin);
    //freopen("booksort.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}