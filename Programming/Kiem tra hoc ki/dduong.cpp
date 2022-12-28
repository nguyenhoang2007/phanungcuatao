#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,d[100001],k,ml=0,s;
void solve() {
    for(int i = 1; i <= n; ++i) {
        for(int j = i; j <= n; ++j)
            if(d[j]-d[i-1]==k*(j-i+1) && j-i+1>ml) {
                ml = j-i+1;
                s=i;
            }
    }
    if(ml==0) {
        cout << 0;
        return;
    }
    cout << ml << ' ' << s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("dduong.inp","r",stdin);
    //freopen("dduong.out","w",stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        cin >> d[i];
        d[i]+=d[i-1];
    }
    solve();
}