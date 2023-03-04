#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;

void solve() {
    if(n == 3 || n == 2) {
        cout << "NO SOLUTION";
        return;
    }
    for(int i = n-1; i >= 1; i-=2) cout << i << ' ';
    for(int i = n; i >= 1; i-=2) cout << i << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}