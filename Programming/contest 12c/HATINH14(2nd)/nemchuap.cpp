#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll test_case,a,b,n,m,r;

void solve() {
    cin >> a >> b >> n >> m;
    if(a*m<b*(m+1)) {
        r = (a*m)*(n/(m+1));
        n%=(m+1);
    } else {
        r = (b*m)*(n/m);
        n%=m;
    }
    r += (n*min(a,b));
    cout << r << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--)
    solve();
}