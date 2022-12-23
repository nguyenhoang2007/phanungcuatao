#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t = 0,temp;

void solve() {
    for(int i = 0; i < 5; ++i) {
        cin >> temp;
        t += temp;
    }
    if(t % 5 != 0 || t == 0) cout << -1;
    else cout << t/5;    
    //cout << " " << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cin >> t;
    //while(t--)
        solve();
}