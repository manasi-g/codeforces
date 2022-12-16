#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n,t,k,d,flag=0,u,v,u1,v1;
cin>>n>>t>>k>>d;
u=n/k;
if(n%k!=0) u++; 
u*=t;
if(d+t<u)   cout<<"YES"<<endl;
else    cout<<"NO"<<endl;
return 0;
}
