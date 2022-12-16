#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k=0,l=0,sum=0;
cin>>n;
ll a[n];
vector<ll>o,e;

for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==1){
        o.push_back(a[i]);
        k++;
        
    }
    else{
        e.push_back(a[i]);
        l++;
        sum+=a[i];
    }
}
sort(o.begin(),o.end());
if(k==0)    cout<<0<<endl;
else{
    if(k%2==0){
        for(ll i=1;i<k;i++){
            sum+=o[i];
        }
    }
    else{
       for(ll i=0;i<k;i++){
            sum+=o[i];
        } 
    }
    cout<<sum;
}

return 0;
}
