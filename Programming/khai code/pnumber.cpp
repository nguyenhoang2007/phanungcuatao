#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a,b,p[2000001];
void solve() {
    for(int i = 2; i <= b; ++i) {
        if(!p[i]) {
            for(int j = i*i; j <= b; j += i) p[j] = 1;
        }
    }
    a--;
    while(++a <= b) if(!p[a]) cout << a << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("pnumber.inp","r",stdin);
    //freopen("pnumber.out","w",stdout);
    cin >> a >> b;
    solve();
}