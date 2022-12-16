#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,t,m,c=0,r=0;
cin>>n>>t;
m=t;
while(m>0){
    c++;
    m=m/10;
}
//string s;
ll k=n-c;
if(n==1 && t==10){
    cout<<-1;
}
else
{
    cout<<t;
    while(k--){
    cout<<0;
}}
cout<<endl;
}