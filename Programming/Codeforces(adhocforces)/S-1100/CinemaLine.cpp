#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,a[100000],m = 0,m25 = 0,m50 = 0;

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] == 25) m25++;
        if(a[i] == 50) {
            if(m25 >= 1) m25--;
            else {
                cout << "NO";
                return;
            }
            m50++;
        }
        if(a[i] == 100) {
            if(m50 >= 1 && m25 >= 1) {
                m50--;
                m25--;
            } else if(m25 >= 3) m25 -= 3;
            else {
                cout << "NO";
                return;
            }

        }
    }
    cout << "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cin >> t;
    //while(t--)
        solve();
}