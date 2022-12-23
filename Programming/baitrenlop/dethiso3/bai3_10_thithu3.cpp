#include<bits/stdc++.h>

using namespace std;

#define ll long long

int k, n,temp,d[100000];

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> k;
        while(k--) {
            cin >> temp;
            d[rand()%100000]++;
        }
    }
    int j = *max_element(d,d+100001);
    for(int i = 0; i < 100001; ++i) {
        if(d[i] == j) cout << i << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai3_10_thithu3.inp","r",stdin);
    //freopen("bai3_10_thithu3.out","w",stdout);
    solve();
}