#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll a[1000001],k,c,p1,p2;

void solve() {
    for(ll i = 1; i <= 1e6; ++i) a[i]=i*i;
    while(a[p2]<k) p2++;
    c+=(a[p2]==k);
    p2--;
    while(p1 < p2) {
        if(a[p1]+a[p2] == k) {
            c+=2;
            p1++;
            p2--;
        }
        else if(a[p1]+a[p2] < k) p1++;
        else p2--;
    }
    cout << c;
}

void init() {
    cin >> k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    solve();
}