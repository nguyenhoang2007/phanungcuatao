#include<bits/stdc++.h>

using namespace std;

#define ll long long
int a[100];
void solve() {
    for(int i = 0; i < 2500000; ++i) a[i%100];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double start = clock();
    solve();
    double end = clock();
    cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}