#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m;
char a[1000];

void rec(int i) {
    if(i == n) {
        for(int j = 0; j < n; ++j) cout << a[j] << ' ';
        cout << '\n';
    }
    else
    for(int j = 1; j <= m; ++j) {
        a[i] = j+48;
        rec(i+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("nhiphan.inp","r",stdin);
    //freopen("nhiphan.out","w",stdout);
    cin >> n >> m;
    rec(0);
}