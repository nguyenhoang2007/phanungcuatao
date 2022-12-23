#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a,b;

int sumd(int x) {
    int ans=0;
    for(int i = 1; i*i <= x; ++i) {
        if(x%i==0) ans += (i*i!=x? i+x/i:i);
    }
    return ans;
}

void solve() {
    cout << sumd(a) << ' ' << sumd(b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("banbe.inp","r",stdin);
    //freopen("banbe.out","w",stdout);
    cin >> a >> b;
    solve();
}