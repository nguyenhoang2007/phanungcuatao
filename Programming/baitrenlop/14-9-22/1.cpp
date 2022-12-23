#include<bits/stdc++.h>

using namespace std;

#define ll long long

int x[10],k,n;

void print() {
    for(int i = 1; i <= k; ++i) cout << x[i] << ' ';
    cout << '\n';
}

void hehe(int i) {
    for(int j = 1; j <= n-k+i; ++j) {
        x[i] = j;
        if(i == k) print();
        else hehe(i+1);
    }
}

void solve() {
    hehe(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("tohop.inp","r",stdin);
    //freopen("tohop.out","w",stdout);
    cin >> k >> n;
    x[0] = 0;
    solve();
}