#include <bits/stdc++.h>

#define ll long long
using namespace std;
int k,d[1000001],c=0;
string a;
void solve() {
    for(int i = 1; i <= a.size(); ++i) {
        d[i] = d[i-1]+(a[i-1]-'0');
        auto f = equal_range(d,d+i,d[i]-k);
        cout << f.second - f.first << ' ';
        c+=(f.second-f.first);
    } 
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("substr.inp","r",stdin);
    //freopen("substr.out","w",stdout);
    cin >> k >> a;
    solve();
}