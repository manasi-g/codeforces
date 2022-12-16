#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,m=INT_MAX,c=0;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    m=min(m,a[i]);
}

for(int i=0;i<n;i++){
    c+=a[i]-m;
}
cout<<c<<endl;
}
return 0;
}
