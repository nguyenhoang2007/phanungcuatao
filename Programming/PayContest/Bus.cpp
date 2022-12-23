#include<bits/stdc++.h>

using namespace std;

#define ll long long

class ppl {
    public:
    int a;
    int b;
} arr[100000];
int n,m,p,d[100000] = {};
void solve() {
    for(int i = 0; i < n; ++i) d[arr[i].b-arr[i].a]++;
    for(int i = 1; i < 100000; ++i) d[i] += d[i-1];
    for(int i = 0; i < 10; ++i) cout << d[i] << ' ';
    //cout << lower_bound(d,d+100000,p)-d;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> p;
    for(int i = 0; i < n; ++i) cin >> arr[i].a >> arr[i].b;
    solve();
}