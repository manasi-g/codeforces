#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll k,flag=0;
cin>>k;
string s,p="",q="";
cin>>s;
ll a[27]={0};
for(ll i=0;i<s.length();i++){
    a[s[i]-'a']++;
}

for(ll i=0;i<27;i++){
    if(a[i]%k!=0 && a[i]!=0)  {flag=1; break;}
    else if(a[i]!=0 && a[i]%k==0){
            char c=char(i+'a');
            int d=a[i]/k;
            for(ll j=0;j<a[i]/k;j++){
                p+=c;
            }
        }
}
if(flag==1) cout<<-1;
else{
        for(ll i=0;i<k;i++) cout<<p; 
    }
return 0;
}
