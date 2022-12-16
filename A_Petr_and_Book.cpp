#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,sum=0,b=0,d=0;
cin>>n;
int a[7];
for(ll i=0;i<7;i++){
    cin>>a[i];
    }
while(sum<n)
{
    for(ll i=0;i<7;i++){
    sum+=a[i];
    if(sum>=n){
        b=i+1;
        break;
    }
}}
cout<<b<<endl;
return 0;
}
