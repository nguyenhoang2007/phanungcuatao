#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,t=0;
vector<pair<int,int>> a;
void solve() {
    sort(a.begin(),a.end());
    for(int i = n-1; i >= 0; --i) {
        t=max(t,n-i+a[i].first+1);
        cout << a[i].second << ' ';
    }
    cout << '\n' << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("flower.inp","r",stdin);
    freopen("flower.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        a.push_back({0,i+1});
        cin >> a[i].first;
    }
    solve();
}