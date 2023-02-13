#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    int n,r=0,l=0,m,d[30] = {},d2[30] = {};
    string a;
    cin >> n >> a;
    for(int i = 0; i < n; ++i) {
        d[a[i]-'a']++;
        r+=(d[a[i]-'a']==1);
    }
    m=r;
    for(int i = 0; i < n; ++i) {
        d[a[i]-'a']--;
        r-=(d[a[i]-'a']==0);
        d2[a[i]-'a']++;
        l+=(d2[a[i]-'a']==1);
        m = max(m,l+r);
        //cout << l << ' '  << r << '\n';
    }
    cout << m;
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