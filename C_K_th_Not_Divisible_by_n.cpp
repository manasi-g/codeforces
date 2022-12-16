#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,c=0;
cin>>n>>k;
ll i=1;
while(c!=k){
if(i%n!=0){
    c++;
}
i++;
}
cout<<--i<<endl;
}
return 0;
}
