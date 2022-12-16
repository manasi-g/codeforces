#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,a,b,c;
cin>>n>>a>>b;
string s;
cin>>s;
c=n;

    ll j=0,d=0,p=0,y=0,one=0,zero=0,z=0;
    p=a*n+b;
    for(ll i=0;i<n-1;i++){
       if(s[i]==s[i+1]){
           c--;
       }
        
    }
    cout << n * a + max(n * b, (c / 2 + 1) * b) << '\n'; 
    

}}

