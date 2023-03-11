#include <bits/stdc++.h>

#define ull long long
using namespace std;
ull n,c=1;
// b o t
void f(int r, int base, int other, int target) {
    if(r == 0) return;
    f(r-1,base,target,other);
    cout << base << ' ' << target << '\n';
    f(r-1,other,base,target);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    for(int i = 1; i < n; ++i) (c*=2)++;
    cout << c << '\n';
    f(n,1,2,3);
}