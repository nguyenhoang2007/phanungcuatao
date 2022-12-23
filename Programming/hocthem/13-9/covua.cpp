#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n,a[1000000],c[1000000][2],m = 0;
string s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("covua.inp","r",stdin);
    freopen("covua.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i > 0) {
            if(a[i] != a[i-1]) {
                s += (to_string(i) + " " + to_string(i+1) + "\n");
                m++;
            }
        }
    }
    cout << m << '\n' << s;
    //solve();
}