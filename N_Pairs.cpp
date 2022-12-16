#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
      ll i,n,j,cnt,k;
    while(cin>>n)
    {
        map<ll,ll>mp;
        map<ll,ll>twos;
        set<ll>s;
        set<ll>:: iterator it;
        for(i=1; i<=31; i++)
        {
            twos[i]=(1ll << i);
        }
        for(i=1; i<=n; i++)
        {
            scanf("%I64d",&cnt);
            mp[cnt]++;
            s.insert(cnt);
        }
        cnt=0;
        for(i=1; i<=31; i++)
        {
            for(it=s.begin(); it!=s.end(); it++)
            {
                j=(*it);
                if(twos[i]>j)
                {
                    k=twos[i]-j;
                    if(j!=k) cnt+=(mp[j]*mp[k]);
                    else if(j==k) cnt+=(mp[j]-1)*mp[j];
                }
            }
        }
        cout<<(cnt/2);
    }
}
return 0;
}
