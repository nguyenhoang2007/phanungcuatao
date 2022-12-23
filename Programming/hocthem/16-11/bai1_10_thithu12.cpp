#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,x,c=0;
void solve() {
    for(int i = 1; i*i <=x && i <= n; ++i) {
        if(x%i==0 && x/i <= n) c+=(i!=x/i?2:1);
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_thithu12.inp","r",stdin);
    freopen("bai1_10_thithu12.out","w",stdout);
    cin >> n >> x;
    solve();
}