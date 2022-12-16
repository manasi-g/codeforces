#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
 ll m[123]={0}; 
 ll c=0,d=0;  
string s;
cin>>s;
for(ll i=0;i<s.length();i++){
    m[s[i]]++;
    
}
for(ll i=0;i<123;i++){
    if(m[i]==1)  c++;
    if(m[i]>=2)  {d++; }
}
cout<<d+c/2<<endl;
}
return 0;
}
