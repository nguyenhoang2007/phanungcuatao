#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t;
string a,b;

void solve() {
    cin >> a >> b;
    a += b;
    int samecount = 0;
    sort(a.begin(),a.end());
    for(int i = 0; i < 3; ++i) if(a[i] == a[i+1]) samecount++;
    if(samecount == 3) cout << 0;
    else if(samecount == 2) cout << 1;
    else if(samecount == 1) cout << 2;
    else cout << 3;
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}