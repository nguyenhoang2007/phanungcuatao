#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
vector<int> a(1000001);

void solve() {
    cin >> n;
    if(n%10 != 9) cout << n/2 << ' ' << (n%2 == 0? n/2 : n/2+1);
    else {
        int c = 0;
        while(n%10 == 9) {
            n/=10;
            c++;
        }
        if(n/2 != 0) cout << n/2;
        if(n%2==1) {
            for(int i = 0; i < c; ++i) {
                if(i%2 == 0) cout << 5;
                else cout << 4;
            }
            cout << ' ' << n/2+1;
            for(int i = 0; i < c; ++i) {
                if(i%2 == 0) cout << 4;
                else cout << 5;
            }
        } else {
            for(int i = 0; i < c; ++i) {
                if(i%2 == 0) cout << 5;
                else cout << 4;
            }
            cout << ' ';
            if(n/2 != 0) cout << n/2;
            for(int i = 0; i < c; ++i) {
                if(i%2 == 0) cout << 4;
                else cout << 5;
            }
        }
    } 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}