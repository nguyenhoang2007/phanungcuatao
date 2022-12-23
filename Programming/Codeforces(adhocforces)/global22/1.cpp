#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[100000],b[100000],c0,c1,d0[100000],d1[100000];
ll score;

void solve() {
    c0=c1=score=0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
        if(a[i] == 0) d0[c0++] = b[i];
        else d1[c1++] = b[i];
    }
    sort(d0,d0+c0);
    sort(d1,d1+c1);
    if(c0!=c1) {
        while(c0>0&&c1>0) score+=(2*(d0[c0--]+d1[c1--]));
        //for(int i = 0; i < max(c0,c1); ++i) {
          //  if(c0>c1) score+=d0[i];
            //else score+=d1[i];
        //}
    } else {
        for(int i = 0; i < n; ++i) {
            if(i == min_element(b,b+n)-b) score+=b[i];
            else score+=b[i]*2;
        }
    }
    cout << score;
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