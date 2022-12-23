#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,q,a[100001],t[4],dl[100001][3],dr[100002][3],l,r;

void solve() {
    cin >> l >> r;
    cout << t[1]-dl[l-1][1]-dr[r+1][1] << ' '; 
    cout << t[2]-dl[l-1][2]-dr[r+1][2] << ' '; 
    cout << t[3]-dl[l-1][3]-dr[r+1][3] << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        t[a[i]]++;
    }
    dl[0][1] = 0;
    dl[0][2] = 0;
    dl[0][3] = 0;
    for(int i = 1; i <= n; ++i) {
        dl[i][1] = dl[i-1][1]; 
        dl[i][2] = dl[i-1][2]; 
        dl[i][3] = dl[i-1][3];
        dl[i][a[i]]++;
    }
    dr[n+1][1] = 0;
    dr[n+1][2] = 0;
    dr[n+1][3] = 0;
    for(int i = n; i >= 1; --i) {
        dr[i][1] = dr[i+1][1]; 
        dr[i][2] = dr[i+1][2]; 
        dr[i][3] = dr[i+1][3];
        dr[i][a[i]]++;
    }
    while(q--) solve();
}