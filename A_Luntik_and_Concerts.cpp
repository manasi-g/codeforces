#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,c;
cin>>a>>b>>c;
if(a==b && b==c)    cout<<0<<endl;
else if((a+2*b+3*c)%2==0)   cout<<0<<endl;
else    cout<<1<<endl;
}
return 0;
}
