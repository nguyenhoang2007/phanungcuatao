#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100],d[100],ml,c[100000],p=0;
void solve() {
    sort(a,a+n);
    for(int i = 0; i < n-1; ++i) d[i] = a[i+1]-a[i];
    ml = *min_element(d,d+n-1);
    for(int i = 1; i*i <= ml; ++i) {
        if(ml%i == 0) {
            c[p++] = i;
            if(i*i!=ml) c[p++] = ml/i;
        }
    }
    sort(c,c+p);
    for(int i = 0; i < p; ++i) {
        bool check = 1;
        for(int j = 0; j < n-1; ++j) {
            if(d[j] % c[i] != 0) check = 0;
        }
        if(check) cout << c[i] << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("game.inp","r",stdin);
    //freopen("game.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}