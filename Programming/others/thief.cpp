#include <bits/stdc++.h>
long long n,m,d=0,i=1,l=1,r=1,s=0;
using namespace std;
struct pt{
    long long x;
    long long y;
};
bool cmp(pt U,pt V){
    return(U.x>V.x);
}
pt a[1000009];
int main(){

    //cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ios_base::sync_with_stdio(false);
    freopen("THIEF.INP","r",stdin);
    freopen("THIEF.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+m+1,cmp);
    while(l<=m){
        if((d+a[l].x)>n){
            l++;
            continue;
        }
        if((d+a[l].x)<=n){
            cout<<a[l].x<<" "<<a[r].y<<'\n';
            s+= a[l].x*a[r].y;
            d+=a[l].x;
            r++;
        }
    }
    cout<<s;

}