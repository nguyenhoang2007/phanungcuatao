#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,same,n;
string p1[1000],p2[1000],p3[1000];

void solve() {
    map<string,int> y;
    int pt[3] = {};
    same = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> p1[i];
    for(int i = 0; i < n; ++i) cin >> p2[i];
    for(int i = 0; i < n; ++i) cin >> p3[i];

    for(int i = 0; i < n; ++i) y[p1[i]]++;
    for(int i = 0; i < n; ++i) y[p2[i]]++;
    for(int i = 0; i < n; ++i) y[p3[i]]++;
    
    for(int i = 0; i < n; ++i) {
        if(y[p1[i]] == 1) pt[0]+=3;
        if(y[p1[i]] == 2) pt[0]++;
    }
    for(int i = 0; i < n; ++i) {
        if(y[p2[i]] == 1) pt[1]+=3;
        if(y[p2[i]] == 2) pt[1]++;
    }
    for(int i = 0; i < n; ++i) {
        if(y[p3[i]] == 1) pt[2]+=3;
        if(y[p3[i]] == 2) pt[2]++;
    }
    cout << pt[0] << ' ' << pt[1] << ' ' << pt[2];
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}