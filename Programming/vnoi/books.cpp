#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,q,s[100000],p[100001];
vector<int> a;

void solve() {
    for(int i = 0; i < q; ++i) {
        
        a.erase(a.begin()+s[i]-1);
        a.insert(a.begin(),s[i]);
    }
    for(int i = 0; i < a.size(); ++i) cout << a[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 0; i < n; ++i) a.push_back(i+1);
    for(int i = 1; i <= n; ++i) p[i] = i-1;
    for(int i = 0; i < q; ++i) cin >> s[i];
    solve();
}