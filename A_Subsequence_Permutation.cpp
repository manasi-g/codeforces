#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,c=0;
cin>>n;
string s;
cin>>s;
string b=s;
sort(b.begin(),b.end());
for(ll i=0;i<n;i++){
    if(s[i]!=b[i])  c++;
}
cout<<c<<endl;
}
return 0;
}
