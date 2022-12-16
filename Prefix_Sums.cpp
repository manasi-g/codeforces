#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
 ll n;
 cin>>n; 
 if((n/2)%2==0){
     cout<<"YES"<<endl; //9+9 9+9
     ll a[n/2],b[n/2],j=0,k=0;
     for(ll i=1;i<=n/2;i++){
         if(i%2==0){
             b[j]=i;
             j++;
         }
         else{
             a[k]=i;
             k++;
         }
     }
     for(ll i=n/2+1;i<=n;i++){
         if(i%2==0){
             a[k]=i;
             k++;
            
         }
         else{
              b[j]=i;
             j++;
         }
     }
     for(ll i=0;i<n/2;i++) cout<<a[i]<<" ";
     cout<<endl;
     for(ll i=0;i<n/2;i++) cout<<b[i]<<" ";
     cout<<endl;

 }
 else{
     cout<<"NO"<<endl;
 }
}
return 0;
}
