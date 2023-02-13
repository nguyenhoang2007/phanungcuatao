#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    ll n,c,a[200000],count=0;
    cin >> n >> c;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i]+=(i+1);
    }
    sort(a,a+n);
    for(int i = 0; i < n; ++i) {
        if(c-a[i]>=0) {
            c-=a[i];
            count++;
        } else break;
    }
    cout << count;
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