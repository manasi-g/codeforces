#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int isprime(ll n){
     ll m=n/2,flag=0;  
  for(ll i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  return 0;
  else  return 1;
      
  return 0; 
}
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,s=0,m=1e7,k=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        if(a[i]%2==1 && a[i]<m) {
            m=a[i];
            k=i;
            }
    }
    if(isprime(s)==1){
        cout<<n<<endl;
        for(ll i=0;i<n;i++){
        cout<<i+1<<" ";
    }
    cout<<endl;}
    else{
        cout<<n-1<<endl;
        for(ll i=0;i<n;i++){
            if(i!=k)    cout<<i+1<<" ";
    }
    cout<<endl;
    }

    

}
return 0;
}
