#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m=0,r[100000],t=0,c=0;
void req(int i) {
    if(t == n) {
        c++;
        cout << n << "=" << r[0];
        for(int j = 1; j < m; ++j) cout << '+' << r[j];
        cout << '\n';
    }
    else if(t < n)
        for(int j = i; j <= n; ++j) {
            t+=j;
            r[m++] = j;
            req(j);
            t-=j;
            m--;
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tachso.inp","r",stdin);
    freopen("tachso.out","w",stdout);
    cin >> n;
    req(1);
    cout << c;
}