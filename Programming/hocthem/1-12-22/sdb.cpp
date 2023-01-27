#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,a,b,c[1000001];
void solve() {
    cin >> a >> b;
    cout << c[b] - c[a-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("sdb.inp","r",stdin);
    //freopen("sdb.out","w",stdout);


    for(int i = 1; i <= 1000000; i++) {
        for(int j = i; j <= 1000000; j+=i) c[j]++; 
    }
    
    for(int i = 1; i <= 1000000; ++i) 
        c[i] = c[i-1] + (c[i] == 9);
    cin >> t;
    while(t--) solve();
}