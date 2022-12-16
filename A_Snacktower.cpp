#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
cin>>n;
ll a[n],b[n+1]={0};
ll c=n;
ll max=0;
for(ll i=0;i<n;i++){
cin>>a[i];
b[a[i]]++;                  //b[4]={0,1,0,0}
while(b[c]==1){             //b[3]=1 , b[2]=0, 
        cout<<c<<" ";
        c--;
    }
    cout<<endl;
}


return 0;
}
