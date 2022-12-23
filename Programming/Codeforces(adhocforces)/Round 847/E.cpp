#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,q,x,y,sh,bh,sw,bw;

void solve() {
    static int s[1002][1002] = {},b[1002][1002] = {};
    cin >> n >> q;
    for(int i = 0; i < n; ++i) {
        cin >> x >> y;
        b[x][y] = 1;
        s[x][y] = 1;
    }
    for(int i = 1; i <= 1001; ++i) {
        for(int j = 1; j <= 1001; ++j)
            b[i][j] += (b[i-1][j] + b[i][j-1] - b[i-1][j-1]);
    }
    for(int i = 1000; i >= 1; --i) {
        for(int j = 1000; j >= 1; --j)
            s[i][j] += (s[i+1][j] + s[i][j+1] - s[i+1][j+1]);
    }
    for(int i = 0; i < q; ++i) {
        cin >> sh >> sw >> bh >> bw;
        cout << s[sh][sw] << ' ' << b[bh+1][bw+1] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}