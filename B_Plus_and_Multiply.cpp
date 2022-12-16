#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,a,b,u,v,w,x,y,flag=0,min,b1;
cin>>n>>a>>b;

for(int i=0;i<n;i++){
    a=1*a;
    b=1+b;
    
    if(a==n || b==n){
        flag=1;
        break;
    }
}
if(flag==1) cout<<"Yes"<<endl;
else
{
    cout<<"No"<<endl;
}
flag=0;
}
return 0;
}
