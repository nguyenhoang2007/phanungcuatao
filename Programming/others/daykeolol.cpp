#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,d[1000],a[1000],st = 0;

int min_link(int c, int d) {
    int p = c-1;
    for(int i = d; i < n; ++i) {
        if(abs(i-p)<=1) {
            if(c != n-2 && d != n-2) {
                st++;
                min_link(c,p)
            }
        }
    }
}

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0;  i < n; ++i) cin >> d[i];

    double start = clock();
    solve();
    double end = clock();
    cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}