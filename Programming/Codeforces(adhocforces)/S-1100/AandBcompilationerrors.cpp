#include<bits/stdc++.h>

using namespace std;

#define ll long long

int a1[100000],a2[100000],a3[100000],n;

void solve() {
    sort(a1,a1+n);
    sort(a2,a2+n-1);
    sort(a3,a3+n-2);
//    for(int i = 0; i < n; ++i) cout << a1[i] << ' ';cout << '\n';
  //  for(int i = 0; i < n; ++i) cout << a2[i] << ' ';cout << '\n';
    //for(int i = 0; i < n; ++i) cout << a3[i] << ' ';cout << '\n';
    for(int i = 0; i < n; ++i) {
        if(a1[i] != a2[i]) {cout << a1[i];break;};
    }cout << '\n';
    for(int i = 0; i < n; ++i) {
        if(a2[i] != a3[i]) {cout << a2[i];break;};
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a1[i];
    for(int i = 0; i < n-1; ++i) cin >> a2[i];
    for(int i = 0; i < n-2; ++i) cin >> a3[i];

    solve();
}