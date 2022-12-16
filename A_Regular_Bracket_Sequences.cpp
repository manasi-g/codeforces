#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k,f=0;
    cin>>n;
    string s="";
    k=n;
   for(ll j=n;j>0;j--)
    {
        s="";
        for(ll i=0;i<j;i++){
            s+='(';
    }
    
        for(ll i=0;i<j;i++){
            s+=')';
    }
    for(ll i=0;i<n-j;i++){
         s+='(';
    }
     for(ll i=0;i<n-j;i++){
            s+=')';
    }
     cout<<s<<endl;
    }
   
    
}
return 0;
}
