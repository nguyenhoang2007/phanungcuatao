#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    int n,x=0,y=0,check=0;
    string a;
    cin >> n >> a;
    for(char i : a) {
        if(i == 'U') y++;
        else if(i == 'D') y--;
        else if(i == 'L') x--;
        else x++;
        if(x == 1 && y == 1) check = 1;
    }
    if(check) cout << "yes";
    else cout << "no";
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