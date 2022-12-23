#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int p;
    cin >> p;
    int total = 1;
    for(int i = 2; i*i <= p; ++i) {
        if(p%i == 0) cout << i << ' ' << p/i << '\n';
        if(p%i == 0 && i*i != p) total += (i+p/i);
        else if(i*i == p) total += i;
    }
    cout << total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double start = clock();
    solve();
    double end = clock();
    //cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}