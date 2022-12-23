#include <bits/stdc++.h>

#define ll long long
using namespace std;

int test_case,n;
void solve() {
    cin >> n;
    if(n == 1) {
        cout << "1 2\n";
        return;
    }
    for(int i = 3; i < n*3; i+=3) cout << i << ' ' << i+1 << (i+3<n*3?:'\n',"");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    
    cin >> test_case;
    while(test_case--) {
        solve();
        //cout << '\n';
    }
}