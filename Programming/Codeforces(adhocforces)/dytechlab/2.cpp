#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll int test_case,l,r,ans,dut,dup,a,b;
long double bs_sqrt(ll x) {
  long double left = 0, right = 2000000123;
  while (right > left) {
      ll mid = (left + right) / 2;
      
      if (mid * mid > x) right = mid;
      else left = mid + 1;
  }
  return left - 1;
}
void solve() {
    cin >> a >> b;
    l=floor(bs_sqrt(a));
    r=ceil(bs_sqrt(b));
    if(r==1) {
        cout << 1;
        return;
    }
    ans=(r-l)*3;
    dut=(a-1)/l-(l*l-1)/l;
    if(r*r==b) {
        dup=(r*r)/(r-1)-b/(r-1);
        ans++;
    }else dup=(r*r-1)/(r-1)-b/(r-1);
    ans=ans-dut-dup;
    //cout << (r*r-1)/(r-1) << ' ' << b/(r-1) << '\n';
    cout << ans;// << ' ' << a << ' ' << b << ' ' << l << ' ' << r;
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