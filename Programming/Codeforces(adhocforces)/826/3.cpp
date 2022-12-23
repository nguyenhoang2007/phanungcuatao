#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[1000001];
void solve() {
    ll r,t,l,temp,tu=0,ta=0;
    
    cin >> n;r=n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        ta += a[i];
    }
    for(int i = 1; i <= n; ++i) {
        tu+=a[i];
        t = 0,l = i,temp = 0;
        if(ta%tu==0) {
            for(int j = i+1; j <= n; ++j) {
                t+=a[j];
                temp++;
                if(t == tu) {
                    t = 0;
                    l = max(l,temp);
                    temp = 0;
                }
                else if(t > tu) break;
                if(j == n) r = min(r,l); 
            }
        //cout << l << ' ';
        }
    }
    cout << r;
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