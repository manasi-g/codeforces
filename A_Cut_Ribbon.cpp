#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,a,b,c,sum=0;
cin>>n>>a>>b>>c;
sum=a+b+c;
if(sum<=n)  {
    cout<<(n-sum)+3<<endl;
}
else{
for(ll i=0;i<3;i++){
    sum+=a;
}
}

return 0;
}
