#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,c=1,j=0;
    cin>>n;
    ll a[n],b[n];
    vector <ll>v;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        
    }
    
    for(ll i=0;i<n;i++){
        j=i;
        ll k=n+1;
       while(k--){
           c++;
           if(a[a[j]-1]==i+1)    {
               b[i]=c;
               c=1;
               break;}
            j=a[i];
        
    }
    }
    for(ll i=0;i<n;i++)  cout<<b[i]<<" ";
    //at max n
    cout<<endl;
}
return 0;
}
