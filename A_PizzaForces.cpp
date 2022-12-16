#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,ans=0,ans1,ans2;
cin>>n;
ll u=(n/6)*15;
if(n<=6 ){
    ans=15;
}
else{
    if(n%2!=0){
        n++;
    }
    ans=(n*5)/2;
}
cout<<ans<<endl;
}
return 0;
}
