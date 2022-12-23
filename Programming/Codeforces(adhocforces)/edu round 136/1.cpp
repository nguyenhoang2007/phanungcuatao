#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,m;
void solve() {
    cin >> n >> m;
    int x=1,y=1;
    if(n>=2) x=n-1;
    if(m>=2) y=m-1; 
    cout << x << ' ' << y;
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