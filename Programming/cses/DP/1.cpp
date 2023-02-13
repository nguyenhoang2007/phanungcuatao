#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a[1000000];
void solve() {
    for(int i = 0; i < 1000000; ++i) {
        a[i] = rand()%1000;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("test.cpp","r",stdin);
    double start = clock();
    solve();
    cout << "\n--------------------\n" << ((double)clock()-start)/CLOCKS_PER_SEC << " seconds";
}