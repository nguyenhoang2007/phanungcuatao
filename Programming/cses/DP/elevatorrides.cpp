#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,x,a[1000001],c,t,p1,p2;
void solve() {
    sort(a,a+n);
    p1 = 0;
    p2 = n-1;
    while(p1 < p2) {
        if(a[p2]+t < x) t+=a[p1++];
        else if(a[p2]+t == x) {
            c++;
            p2--;
            t=0;
        } else {
            c++;
            p2--;
            p1--;
            t=0;
        }
    }
    cout << c + (t+a[p2]>x?2:1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}