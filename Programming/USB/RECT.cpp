#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long 
const long long R = 1e9+7;
const long long N = 1e6+9;
stack<int>l, r;
ll trai[N], phai[N], n, m, h[N];
ll x, gmax = LLONG_MIN;
void findleft(){
    while(!l.empty() && h[l.top()] >= h[x])
        l.pop();
    if(l.empty())
        trai[x] = 0;
    else
        trai[x] = l.top();
    l.push(x);
}
void findright(){
    while(!r.empty() && h[r.top()] >= h[x])
        r.pop();
    if(r.empty())
        phai[x] = n+1;
    else
        phai[x] = r.top();
    r.push(x);
}
void slove(){    
    for(x = 1; x <= n; x++)
        findleft();
    for(x = n; x >= 1; x--)
        findright();
    ll res, x1, x2, y1, y2;
    for(int i = 1; i <= n; i++){
        res = (phai[i] - trai[i] - 1) * h[i];
        if(res > gmax){
            gmax = res;
            x1 = 1;
            y1 = trai[i]+1;
            x2 = h[i];
            y2 = phai[i]-1;
        }
    }
    cout<<gmax<<'\n';
    cout<<x1<<" "<<y1<<'\n'<<x2<<" "<<y2;
}
int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    freopen("RECT.inp","r",stdin);
    freopen("RECT.out","w",stdout);
    cin>>m>>n;
    for(int i = 1; i <= n; i++){
        cin>>h[i];
    }
    slove();
}