#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,o=0,e=0;
cin>>n;
string s;
cin>>s;
if(n%2==0){
    for(ll i=1;i<n;i+=2){
        if((s[i]-'0')%2==0) {
            e=1;
            break;
        }
       
    }
     if(e==1)    cout<<2<<endl;
    else cout<<1<<endl;
}
else{
    for(ll i=0;i<n;i+=2){
        if((s[i]-'0')%2==1)  { 
            e=1;
            break;
        }
       
    }
     if(e==1)    cout<<1<<endl;
    else cout<<2<<endl;
}
}
return 0;
}
