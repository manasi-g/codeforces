#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,s,b;
cin>>n>>s;
if(n%2==0)  b=n/2-1;
else    b=n/2;
    ll a=n-b;
    ll k=s;
    
    if(k%a==0){
        cout<<k/a<<endl;
    }
    else{
        if(k%a>=a)  cout<<k/a+1<<endl;
         else cout<<k/a<<endl;
    }
}
return 0;
}
