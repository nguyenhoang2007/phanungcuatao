#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
string board[8];
void solve() {
    for(int i = 0; i < 8; ++i) cin >> board[i];
    for(int i = 0; i < 8; ++i) {
        bool check = true;
        for(int j = 0; j < 8; ++j) {
            if(board[i][j] != 'R') check = false;
        }
        if(check) {
            cout << 'R';
            return;
        }
    }
    cout << 'B';
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