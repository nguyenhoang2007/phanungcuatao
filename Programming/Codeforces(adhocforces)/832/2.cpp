#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll test_case,n,r,l;
void solve() {
    int c=0;
    l=2;
    cin >> n;
    r=n*3;
    if(n==1) {
        cout << "1\n2 1";
        return;
    }
    while(l<r) {
        c++;
        l+=3;
        r-=3;
    }
    l=2;
    r=n*3;
    cout << c << '\n';
    while(l<r) {
        cout << l << ' ' << r << '\n';
        l+=3;
        r-=3;
    }
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