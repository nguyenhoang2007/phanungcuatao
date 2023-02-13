#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    int n,a[100000],check = 0,c=0,t=0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        t+=a[i];
        if(a[i] == a[i-1] && a[i] == -1) check = 1;
        if(a[i] == -1) c = 1;
    }
    if(check) cout << t+4;
    else if (c) cout << t;
    else cout << t-4;
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