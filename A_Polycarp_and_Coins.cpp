#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
if(n%3==0){
    cout<<n/3<<" "<<n/3<<endl;
}
else if(n%3==2){
    cout<<n/3<<" "<<n/3+1<<endl;
}
else  cout<<n/3+1<<" "<<n/3<<endl;
}
return 0;
}
