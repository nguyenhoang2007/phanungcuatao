#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll t,a,b,x,y,n,temp;

void solve() {
    cin >> a >> b >> x >> y >> n;
    if((a-x)+(b-y)<=n) {a=x,b=y;}
    else if(max(a-n,x) < max(b-n,y) || max(a-n,x) == max(b-n,y) && a<b) {
        temp = min(n,a-x);
        a -= temp;
        n -= temp;
        temp = min(n,b-y);
        b -= temp;
        n -= temp;
    } else {
        temp = min(n,b-y);
        b -= temp;
        n -= temp;
        temp = min(n,a-x);
        a -= temp;
        n -= temp;
    }
    cout << a*b << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) solve();
}