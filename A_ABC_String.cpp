#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
string s;
cin>>s;
ll n=s.length();
if(s[0]==s[n-1])    cout<<"NO"<<endl;
else{
    ll f=0;
    string u="";
    int l= count(s.begin(),s.end(),s[n-1]);
    int m= count(s.begin(),s.end(),s[0]);
    
    for(ll i=0;i<n;i++){
        if(s[i]==s[n-1])    u+=')';
        else if(s[i]==s[0])    u+='(';
        else if(l>m) u+='(';
        else if(l<=m)   u+=')';
        
    }
    //cout<<u;
    //cout<<l<<" "<<m<<" "<<u<<endl;
   
    int o= count(u.begin(),u.end(),'(');
    int c= count(u.begin(),u.end(),')');
    ll p=0;
    if(o==c){
        for(ll i=0;i<n;i++)
        {
            if(p<0) break;
            if(u[i] =='(')  p++;
            else if(u[i] == ')')    p--;
        }
    
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;}
    else    cout<<"NO"<<endl;
    
}
}
return 0;
}
