#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,j=0,i=0,u=1;
cin>>n;
ll a[1001];
while(i!=1000 )
{
    if(u%3==0 || u%10==3){
    u++;
    continue;
}
else{
    a[i]=u;
    i++;
    u++;
}
}
cout<<a[n-1]<<endl;
}
return 0;
}
