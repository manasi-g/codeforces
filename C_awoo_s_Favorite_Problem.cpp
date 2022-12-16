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
    string a,b;
    cin>>a>>b;
    //abbabc    //bababc    //bbaacb
    //ab=1 ba=1 bc=1 cb=0
    //ab=0 ba=1 bc=0 cb=1

    //ab=3 ba=2 bc=2 cb=0
    //ab=2 ba=3 bc=0 cb=1

    //cbaba
    //cbaabababc    //cbabaababc    //cbba
for(ll j=0;j<n;j++){
    for(ll i=0;i<n;i++){
        //if(a[i]==b[i])  continue;
       if(i!=n-1) {
           if(a[i]!=b[i] && a[i]=='a' && a[i+1]=='b')  swap(a[i],a[i+1]);
           else if(a[i]!=b[i] && a[i]=='b' && a[i+1]=='c')  swap(a[i],a[i+1]);
           }
    }}
    if(a==b)    cout<<"YES"<<endl;
    else    cout<<a<<" "<<"NO"<<endl;
}
return 0;
}
