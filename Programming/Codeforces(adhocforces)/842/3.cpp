#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[200000],p[200000],q[200000],dq[200001],pa,pb;
void solve() {
    cout << "#Test:\n";
    int d[200001],dp[200001];
    cin >> n;
    pa = pb = n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        d[a[i]] = i;
    }
    sort(a,a+n,greater<int>());
    for(int i = 0; i < n; ++i) {
        if(a[i] != a[i-1]) {
            p[i] = a[i];
            dp[a[i]] = 1;
        } else {
            q[i] = a[i];
            dq[a[i]] = 1;
        }
    }
    for(int i = 0; i < n; ++i) {
        if(dp[a[i]] == 1 && q[i] == 0) {
            while(dq[pb] == 1) pb--;
            q[i] = pb;
            dq[pb] = 1;
            cout << pb << ' ';
        }
    }/*
    for(int i = 0; i < n; ++i) {
        if(dq[a[i]] == 1) {
            while(dp[pa] == 1) pa--;
            p[i] = pa;
            dp[pa] = 1;
        }
    } */
    //for(int i = 0; i < n; ++i) cout << p[i] << ' '; cout << '\n';
    //for(int i = 0; i < n; ++i) cout << q[i] << ' '; cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}