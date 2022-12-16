#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,m,k,k1=0,k2=0,l=0,u=0,v=0;
    cin>>n>>m>>k;
    string a,b,c="";
    cin>>a>>b;
    sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     ll r=max(n,m);;
     for(ll i=0;i<n+m;i++){
         l++;
         if(u==n || v==m)   break;   
         if(k1>=k){
             c+=b[v];
             k2++;
             k1=0;
             v++;
         }
         else if(k2>=k){
              c+=a[u];
                k1++;
                k2=0;
                u++;
         }
         else{
         if(a[u]<b[v]) { c+=a[u];   k1++; k2=0; u++;}
         else   {c+=b[v]; k2++; k1=0; v++;
         }
         }

     }
     cout<<c<<endl;

}
return 0;
}
