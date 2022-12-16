#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,c=0,f=0,u=0,v=0,w=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}

for(ll i=0;i<n;i++){
    if(a[i]==25)   u++;
    else if(a[i]==50){
        ll k=(a[i]-25)/25;
        if(a[i]==50)   v++;
        
        if(u>=k){
            u=u-k;   
        }
        else{
            f=1;
            break;
        }
    }
    else if(a[i]==100){
        
        if(v>=1 && u>=1){
            u--; 
            v--;  
        }
        else if(u>=3){
            u=u-3;
        }
        else{
            f=1;
            break;
        }
    }
}
if(f==1) cout<<"NO";
else cout<<"YES"<<endl;
return 0;
}
