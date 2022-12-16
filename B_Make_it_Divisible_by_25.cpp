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
    ll a=0,b=0,f=0,u=0,v=0,k=1e7,m=1e7;
    for(ll i=s.length()-1;i>=0;i--){
        if(f==0){
        if(s[i]=='5'){
            f=1;
            a=i+1;
            continue;
        }}
        if(f==1){
        if(s[i]=='2' || s[i]=='7'){
            f=0;
            b=i+1;
            break;
        }}

    }
    ll n=s.length();
    if(a!=b){
    k=n-a;
    k+=(a-b)-1;}
    else    k=1e7;
    //if(a-b==1) k++;    
    f=0;
    for(ll i=s.length()-1;i>=0;i--){
        if(f==0){
        if(s[i]=='0'){
            f=1;
            u=i+1;
            continue;
        }}

        if(f==1){
        if(s[i]=='0'){
            f=0;
            v=i+1;
             break;
        }}

    }
    if(u!=v) 
    {m=n-u;
    m+=(u-v)-1;}
    else    m=1e7;
   
ll r=0,l=0,j=1e7;
    f=0;
     for(ll i=s.length()-1;i>=0;i--){
        if(f==0){
        if(s[i]=='0'){
            f=1;
            r=i+1;
            continue;
        }}
        if(f==1){
        if(s[i]=='5'){
            f=0;
            l=i+1;
            break;
        }}

    }
     if(r!=l){
    j=n-r;
    j+=(r-l)-1;}
    else    j=1e7;
    

    //cout<<u<<" "<<v<<" "<<j<<" ";
    
    cout<<min(j,min(k,m))<<endl;
}
return 0;
}
