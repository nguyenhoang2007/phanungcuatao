#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,e[200001];
ll dp[200001],m[200001];
class mmb {
	public:
		int start,end,val;
} a[200001];
 
bool endday(mmb x, mmb y) {
	return (x.end < y.end || (x.end == y.end && x.val > y.val));
}
 
void solve() {
	dp[0] = 0;
	sort(a+1,a+n+1,endday);
	for(ll i = 1; i <= n; ++i) {
		e[i] = a[i].end;
		ll f = upper_bound(e,e+i,a[i].start-1)-e-1;
		dp[i] = m[f]+a[i].val;
		m[i] = max(dp[i],dp[i-1]);
	}
	cout << m[n];
}
 
void input() {
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(ll i = 1; i <= n; ++i) cin >> a[i].start >> a[i].end >> a[i].val;
	solve();
}