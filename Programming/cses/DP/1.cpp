#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
ll n,a[1000005],b[1000005],d=1;
void solve() {
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("test.txt","r",stdin);
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    b[1]=a[1];
    for(int i=2;i<=n;i++)
        {
            if(b[1]>a[i])
                {
                    b[1]=a[i];
                }
        else
           { if(b[d]<a[i])
                {
                    d++;
                    b[d]=a[i];
                }
            else
                {
                    int u=upper_bound(b+1,b+d+1,a[i])-b-1;
                    if(b[u]!=a[i])
                        {
                            u=upper_bound(b+1,b+d+1,a[i])-b;
                            b[u]=a[i];
                        }
                }
           }
        }
    cout<<d;
    cout << '\n' << (double)clock()/CLOCKS_PER_SEC << " giay";
  ///  solve();
}