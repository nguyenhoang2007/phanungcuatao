#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,m = 1,t = 0,l,r = 0,b = 5,pr;

string name(ll a) {
    if(a == 1) return "Sheldon";
    if(a == 2) return "Leonard";
    if(a == 3) return "Penny";
    if(a == 4) return "Rajesh";
    return "Howard";
}

void solve() {
    while(t < n) {
        pr = t;
        t+=b;
        b*=2;
        //cout << t << ' ';
        m*=2;
    }
    m/=2;
    for(int i = pr+1; i <= n; i += m) {
        r++;
    }
    if(r == 0) r++;
    cout << name(r);
}
// 5 10 20 40 80 160 320 640 1280 2560 5120 10240 20480
// 5 15 35 75 155 315 635 1275 2555
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    solve();
}