#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
vector<int> a(1000001),b(10000001),c(1000001);

void solve() {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k)
                if(a[i] < b[j] < c[k])
        }
    }
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    for(int i = 0; i < n; ++i) cin >> c[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    solve();
}