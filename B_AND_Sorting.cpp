#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,ans,f=1;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
         if(a[i]!=i){
             if(f) { ans=i; f=0;}
             else   ans&=i;
         }
       
    }
    
    
    cout<<ans<<endl;
}
return 0;
}
