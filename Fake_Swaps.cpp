#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,f=0,c=0,zero=0,one=0;
cin>>n;
string s,p;
char x,y,z;
cin>>s>>p;
if(s==p)    f=1;
for(ll i=0;i<n;i++){
    if(s[i]!=p[i]){
        c++;
        if(p[i]=='0')   zero++;
        else    one++;
    }
}
if(c<=3){
    if(one>0 || zero>0) f=1;
}
if(f==1)    cout<<"YES"<<endl;
else    cout<<"NO"<<endl;
}
return 0;
}
