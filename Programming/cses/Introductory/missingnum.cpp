#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,temp,a[1000001];

void solve() {
    for(int i = 1; i <= n; ++i) {
        if(a[i]==0) {
            cout << i;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    for(int i = 0; i < n-1; ++i) {
        cin >> temp;
        a[temp]++;
    }
    solve();
}