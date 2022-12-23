#include <bits/stdc++.h>
 
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define ll long long
#define even(x) x%2==0
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a*b)/gcd(a,b)
#define el "\n"
#define len(s) s.length()
#define qread int n;cin>>n;int a[n];read(a, n)
#define sz size
#define io freopen("input.inp", "r", stdin);freopen("output.out", "w", stdout);
 
using namespace std;
 
int mod = 1e9+7;
 
int n, m, q, x, y, k, s1, s2;
int t;
 
string yesno(bool check) {return (check ? "Yes" : "No");}
ll sqr(ll n) {return n*n;}
void read(int a[], int n) {for (int i = 0; i < n; ++i) cin >> a[i];}
void read(vector<int> &a, int n) {for (int i = 0; i < n; ++i){int x;cin >> x;a.pb(x);}}
void print(int a[], int n) {for (int i = 0; i < n; ++i) cout << a[i] << ' '; cout << el;}
void print(ll a[], int n) {for (int i = 0; i < n; ++i) cout << a[i] << ' '; cout << el;}
void print(vector<int> a) {for (auto x : a) cout << x << ' '; cout << el;}
void print(ll a) {cout<<a<<el;}
void print(int a) {cout<<a<<el;}
//sussy bakba
void solve()
{	
	int n;
	ll ans = 0;
	cin >> n;
	int a[n];
	vector<ll> fire, frost;

	for (int i = 0; i < n; ++i) cin >> a[i];

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		if (a[i] == 1) fire.pb(x); else frost.pb(x);
	}

	sort(all(fire), greater<int>());
	sort(all(frost), greater<int>());

	if (fire.size() < frost.size())
	{
		ans += frost[frost.size()-1];
		for (int i = 0; i < fire.size(); ++i) ans += fire[i]*2;

		int i = 0;
		for (; i < fire.size(); ++i) ans += frost[i]*2;

		for (; i < frost.size()-1; ++i) ans += frost[i];
	} else if (fire.size() != frost.size())
	{
		ans += fire[fire.size()-1];
		for (int i = 0; i < frost.size(); ++i) ans += frost[i]*2;

		int i = 0;
		for (; i < frost.size(); ++i) ans += fire[i]*2;

		for (; i < fire.size()-1; ++i) ans += fire[i];
	} else
	{
		for (int i = 0; i < frost.size(); ++i) ans += frost[i]*2+fire[i]*2;
		if (frost[frost.size()-1] < fire[frost.size()-1]) ans -= frost[frost.size()-1];
        else ans -= fire[frost.size()-1];
	}
	
	cout << ans << el;
}
 
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	t = 1;
	cin >> t;
 
	while (t--) solve();
 
	return 0;
}