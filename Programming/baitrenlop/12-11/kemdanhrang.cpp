#include <bits/stdc++.h>
using namespace std;
long long n,a[1000009],s[1000009],minn[1000009],c=0,maxx,ld,lc;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    freopen("ps.inp","r",stdin);
    freopen("ps2.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i] = s[i-1] + a[i];
        minn[i] = min(minn[i-1],s[i]);
    }
    minn[0] = 0;
    maxx = 0;
    for(int i=1;i<=n;i++){
        c = upper_bound(minn,minn+n,s[i],greater<int>()) - minn;
        if(i-c>maxx){
            maxx = i-c;
            ld = c;
            lc = i;
        }
    }
    cout<<ld+1<<" "<<lc;
}