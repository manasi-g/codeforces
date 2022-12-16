#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int f=0,n;
string s,v="";
cin>>s;
n=s.length();
for(ll i=0;i<s.length();i++){
    if(s[i]=='0' && f==0){ 
        v+="";
        f=1;
        }
    else    v+=s[i];
}
if(f==0)    cout<<v.substr(0,n-1);
else    cout<<v<<endl;
return 0;
}
