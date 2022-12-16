#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k,min,sum=0,index=0,sum1=0;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    
}
for(ll i=0;i<k;i++){
    sum+=a[i];
    
}
min=sum;
for(ll i=1;i<n-k+1;i++){
   
   sum-=a[i-1];
   sum+=a[i+k-1];
    if(sum<min){
            
            index=i;
            min=sum;
        }
}

cout<<index+1;
return 0;
}
