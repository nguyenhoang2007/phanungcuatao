#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a[1000000];
void solve() {
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i*i <= 100; ++i) {
        if(a[i] == 0)
            for(int j = i*i; j <= 100; j += i) a[j] = 1;
    }
    for(int i = 1; i <= 100; ++i) if(a[i] == 0) cout << i << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai2.inp","r",stdin);
    //freopen("bai2.out","w",stdout);

    solve();
}