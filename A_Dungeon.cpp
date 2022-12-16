#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,c,s=0,u;
cin>>a>>b>>c;
ll sum=a+b+c;
if(sum%9!=0)   cout<<"NO"<<endl;
else if(a<sum/9 || c<sum/9 || b<sum/9){
cout<<"NO"<<endl;
}
else    cout<<"YES"<<endl;
}
return 0;
}
