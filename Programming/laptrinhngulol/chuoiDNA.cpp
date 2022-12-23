#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll n,a[1000000],ak[1000000],b[1000000],bk[1000000];
string adn;

void solve() {
    if(adn[0] == 'A') {
        a[0] = ak[0] = 0;
        b[0] = bk[0] = 1;
    } else {
        a[0] = ak[0] = 1;
        b[0] = bk[0] = 0;
    }
    for(int i = 1; i < n; ++i) {
        if(adn[i] == 'B') {
            a[i] = min(a[i-1],ak[i-1])+1;
            if(adn[i-1] == 'B') ak[i] = ak[i-1];
            else ak[i] = min(b[i-1],bk[i-1])+1; 
        } else a[i] = ak[i] = min(a[i-1],ak[i-1]);
        if(adn[i] == 'A') {
            b[i] = min(b[i-1],bk[i-1])+1;
            if(adn[i-1] == 'A') bk[i] = bk[i-1];
            else bk[i] = min(a[i-1],ak[i-1])+1; 
        } else b[i] = bk[i] = min(b[i-1],bk[i-1]);
    }
    //for(int i = 0; i < n; ++i) cout << a[i] << ' '; cout << '\n';
    //for(int i = 0; i < n; ++i) cout << ak[i] << ' '; cout << '\n';
    //for(int i = 0; i < n; ++i) cout << b[i] << ' '; cout << '\n';
    //for(int i = 0; i < n; ++i) cout << bk[i] << ' '; cout << '\n';
    cout << min(a[n-1],ak[n-1]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> adn;

    double start = clock();
    solve();
    double end = clock();
    //cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}