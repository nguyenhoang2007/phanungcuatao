#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,lmax=0;
vector<pair<int,int>> a;
pair<int,int> l;
bool compare(pair<int,int> f, pair<int,int> s) {
    return(f.second < s.second || (f.second == s.second && f.first < s.first));
}
void solve() {
    sort(a.begin(),a.end(),compare);
    for(int i = 1; i < a.size(); i++) {
        if(a[i].second == a[i-1].second) {
            a.erase(a.begin()+i);
            i--;
        }
    }
    l = a[0];
    for(int i = 1; i < a.size(); ++i) {
        if(a[i].first <= a[i-1].second) {
            l.first = min(l.first,a[i].first);
            l.second = a[i].second;
        } else {
            lmax = max(lmax,l.second-l.first);
            l = a[i];
        }
    }
    lmax = max(lmax,l.second-l.first);
    cout << lmax; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("line.inp","r",stdin);
    freopen("line.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        a.push_back({0,0});
        cin >> a[i].first >> a[i].second;
    }
    solve();
}