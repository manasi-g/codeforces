#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b;
cin>>a>>b;
if(b==1)    cout<<"NO"<<endl;
else{
    cout<<"YES"<<endl;
    cout<<a*1<<" "<<a*b<<" "<<a*(b+1)<<endl;
}
}
return 0;
}
