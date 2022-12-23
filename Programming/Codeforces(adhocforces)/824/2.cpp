#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
double a[10000],r=0;
void solve() {
    r=0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    int m = *min_element(a,a+n);
    for(int i = 0; i < n; ++i) {
        if(a[i]>=2*m) r+=(ceil(a[i]/(2*m-1))-1);
    }
    cout << int(r);
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