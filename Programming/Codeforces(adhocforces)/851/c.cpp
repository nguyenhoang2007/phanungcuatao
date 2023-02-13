#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
vector<int> a(1000001);

void solve() {
    int l1,l2,r1,r2;
    cin >> n;
    if(n%2==0) {
        cout << "no";
        return;
    }
    cout << "yes\n"; 
    l1 = 1;
    l2 = n;
    r1 = n+n/2;
    r2 = n+n/2+1;
    while(l1 != l2) {
        cout << l1 << ' ' << r2 << '\n';
        cout << l2 << ' ' << r1 << '\n';
        l1++;
        l2--;
        r1--;
        r2++;
    }
    cout << l1 << ' ' << 2*n;
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