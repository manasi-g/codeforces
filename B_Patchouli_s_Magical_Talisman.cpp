#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,c=0,ans=0,k=INT_MAX,e=0,r=0,l=INT_MAX;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2)  c++;
        else{
           e++;
           ll m=a[i];
           while(m%2==0){
               m/=2;
               r++;
           }
           if(r<l)  l=r;
            if(a[i]<k) { k=a[i]; }
        }
    }
    //cout<<e<<" ";
    if(c==n)  cout<<0<<endl;
    else if(e==n){
               cout<<r<<endl;
                }
    else{
        cout<<n-c<<endl;
    }  
     
}
return 0;
}
