#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,n,m,sum=0;
cin>>a>>b>>n>>m;
ll min1=min(a,b);
ll z=abs(a-b);
if(2*n>m){
    cout<<z*n+min1*m<<endl;
}
else{
    cout<<n*(a+b)<<endl;
}

}
return 0;
}
