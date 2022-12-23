#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    int n,temp;
    ll s1=0,s2=0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        if(temp<0) s1 += temp;
        else s2 += temp;
    }
    cout << abs(s1+s2);
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