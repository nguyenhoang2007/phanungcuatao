#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k;
bool a[1000001] = {};
void solve() {
    for(int i = 1; i <= n; ++i) {
        //a[i] 
        a[i] = ((k)%2);
    }
    for(int i = 1; i <= n; ++i) if(a[i]) cout << i << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("      ","r",stdin);
    //freopen("      ","w",stdout);
    cin >> n >> k;
    solve();
}