#include<bits/stdc++.h>

using namespace std;

#define ll long long
int a,n;
void solve() {
    int b = 1;
    for(int i = 0; i < n; ++i) {
        b*=a;
        b%=10;
    }
    cout << b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai2_10_thithu4.inp","r",stdin);
    //freopen("bai2_10_thithu4.out","w",stdout);
    cin >> a >> n;
    solve();
}