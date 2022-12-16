#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n, m=0, u=INT_MAX,k=0,p=0;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>m)  {
        k=i;
        m=a[i];
    }
    if(a[i]<u)  {
        p=i;
        u=a[i];
    }
}

cout<<p+1<<" "<<k+1<<endl;
}
return 0;
}
