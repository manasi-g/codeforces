#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,a=0,b=0,p=0,q=0,f=0,u=0,v=0,t=0,k=0,m=0,r=0;
cin>>n;
string s;
cin>>s;
for(ll i=0;i<n;i++){
    if(s[i]=='a')  a++;
    else    b++;
    if(s[i]=='a' && s[i+1]=='b' || s[i]=='b' && s[i+1]=='a' ){
        p=i+1;
        q=p+1;
        f=1;
        break;

    }
}
if(a==b){
    f=1;
    p=1; 
    q=n;
}

if(f==1)    cout<<p<<" "<<q<<endl;
else    cout<<-1<<" "<<-1<<endl;
}
return 0;
}
