#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string s,t,p="";
cin>>s>>t;
ll c=0;
ll n=s.length();
p=s;
for(ll i=0;i<n;i++){
    if(s[i]==t[i])  p[i]=s[i];
    else if(c%2==0){
        p[i]=s[i];
        c++;
    }
    else if(c%2!=0){
        p[i]=t[i];
        c++;
    }
}
if(c%2==1)  cout<<"impossible";
else    cout<<p;
return 0;
}
