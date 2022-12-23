#include <bits/stdc++.h>

#define ll long long
#define ii pair<int,int>
#define pi pair<ii,int>
#define X first
#define y second
using namespace std;
int n,a,b,kt,dem,kq[1001];
pi x[1001];
void solve() {
    int k=1,v=a,kt=0;
    while(v<b) {
        for(int j=n; j>=k; j--) {
            if(x[j].X.X<=v) {
                dem++;
                kq[dem] = x[j].y;
                v=x[j].X.y;
                k=j+1;
                kt=1;
                break;
            } if(!kt) exit;
        }
    }
}

bool ss(pi &u, pi &v) {
    return(u.X.y<v.X.y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("doan_th.inp","r",stdin);
    //freopen("doan_th.out","w",stdout);
    cin >> n >> a >> b;
    for(int i = 1; i <= n; ++i) {
        cin >> x[i].X.X >> x[i].X.y;
        x[i].y=i;
    }
    sort(x+1,x+n+1,ss);
    solve();
    if(dem==0||kt==0) cout << 0;
    else {
        cout << dem << '\n';
        for(int i = 0; i <= dem; ++i) cout << kq[i] << ' ';
    }
}