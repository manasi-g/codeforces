#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll a[5],sum=0;
for(ll i=0;i<5;i++) {
    cin>>a[i];
    sum+=a[i];
}
if(sum==0)  cout<<-1;
else if(sum%5==0){
    cout<<sum/5;
}
else    cout<<-1;
return 0;
}
