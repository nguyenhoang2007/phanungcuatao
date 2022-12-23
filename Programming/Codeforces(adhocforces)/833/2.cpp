#include <bits/stdc++.h>


#define ll long long
using namespace std;
int test_case,n,ans;
char s[1000000];
void solve() {
    ans=0;
    cin >> n >> s;
    for(int i = 0; i < n; ++i) {
        int d[10] = {},f=0,m=0;
        for(int j = i; j <= i+100 && j < n; ++j) {
            if(d[s[j]-'0']==0) f++;
            d[s[j]-'0']++;
            m=max(m,d[s[j]-'0']);
            if(m<=f) ans++;
        }
    }
    cout << ans;
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
