#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,n,m;
ll d[100001],suf[100001],r;
void solve() {
    for(int i = 1; i <= 1000; ++i) {
        for(int j = 1; j <= 1000; ++j) {
            if(j > i) r += d[i]*d[j]*suf[i+j-1]%1000000007;
            else r += d[i]*(d[j]-1)*suf[i+j-1]%1000000007;
        }
    }
    cout << r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n >> m;
        d[n]+=m;
    }
    for(int i = 1; i <= 100000; ++i) suf[i] = suf[i-1]+d[i];solve();
}