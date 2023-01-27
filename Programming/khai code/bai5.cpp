#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,s[1000000],ans = 0;
void solve() {
    //sang nguyen to
    s[0] = 1;
    s[1] = 1;
    for(int i = 2; i < n; ++i) {
        if(s[i] == 0)
            for(int j = i*i; j < n; j+=i) s[j] = 1;
    }
    //dem
    for(int i = 1; i <= n/2; ++i)
        ans += (s[i]==0 && s[n-i]==0);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai5.inp","r",stdin);
    freopen("bai5.out","w",stdout);
    cin >> n;
    solve();
}