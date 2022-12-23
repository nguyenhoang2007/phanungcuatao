#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,a[200000],n,r,p1,p2;

void solve() {
    r = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    p2=0;p1=0;
    for(p1=0; p2<n; ++p2) {
        
        while(p2-p1<a[p2]) p2++;
        cout << p2 << ' ';
        p1=p2;
    }
    //cout << r;
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