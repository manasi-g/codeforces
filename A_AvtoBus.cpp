#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
//14 2,2
while(t--){
    ll n;
    cin>>n;
    if(n%2!=0 || n<=3)  cout<<-1<<endl;
    
    else{
      ll r=n,k=0,l=0,p,q;
      k=n/6; l=n/4;
      if(n%6!=0){
         k++;
            
      }
      if(k==0 || l==0)    max(k,l);
        cout<<k<<" "<<l<<endl;
        
    }


}
return 0;
}
