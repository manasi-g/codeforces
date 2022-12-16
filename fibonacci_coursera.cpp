#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k,sum=1;
cin>>n;
if(n<=1){
    cout<<n;
}
else
{ll a[n+1];
a[0]=0,a[1]=1;
for(ll i=2;i<n+1;i++){
    a[i]=a[i-1]%10+a[i-2]%10;
    sum+=a[i]%10;
}
cout<<abs(sum%10);}

}
