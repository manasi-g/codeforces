#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,flag=0;
cin>>n;
ll a[n][5];
ll k=0,c=0;
 for(ll i = 0;i<n;i++){
    for(ll j = 0;j<5;j++){
        cin>>a[i][j];
        }
    }
for(ll i=1;i<n;i++){
    c=0;
    for(ll j=0;j<5;j++){
        if(a[i][j]<a[k][j]) c++;

    }
    //cout<<c<<" ";
    if(c>=3){
        k=i;
    }
}
for(ll i=0;i<n;i++){
    
    if(i==k)    continue; 
    
    c=0;
    for(ll j=0;j<5;j++){
        if(a[i][j]>a[k][j]) c++;

    }
    if(c<3){
        flag=1;
        
        break;
    }
}
if(flag==1) cout<<-1<<endl;
else
cout<<k+1<<endl;
}
return 0;
}