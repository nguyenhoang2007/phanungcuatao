#include <bits/stdc++.h>

#define ll long long
using namespace std;
int x,y,q,d[1000001];
ll t[1000001];
void solve() {
    // trả lời các truy vấn
    cin >> x >> y;
    cout << d[y]-d[x-1] << ' ' << t[y]-t[x-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("natdiv.inp","r",stdin);
    freopen("natdiv.out","w",stdout);
    cin >> q;
    // đánh dấu mảng d[i] là số ước của i và mảng t[i] là tổng số ước của i
    for(int i = 1; i <= 1000000; ++i) {
        for(int j = i; j <= 1000000; j+=i) {
            d[j]++;
            t[j]+=i;
        }
    }
    // biến 2 mảng trên thành mảng cộng dồn
    for(int i = 1; i <= 1000000; ++i) {
        d[i] += d[i-1];
        t[i] += t[i-1];
    }
    while(q--) solve();
}