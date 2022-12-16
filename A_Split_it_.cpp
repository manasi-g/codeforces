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
string s;
cin>>s;

for(ll i=0;i<k;i++){
     if(s[i]!= s[n - i - 1]){
        c=1;
    }
    
}
if(k==0){
    cout<<"YES"<<endl;
}
else if(n%2==0 && k>=n/2 || n%2!=0 && k>=n/2+1){
    cout<<"NO"<<endl;
}

else if(c==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
