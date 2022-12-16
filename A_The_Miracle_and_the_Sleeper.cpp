#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll l,r;
cin>>l>>r;
ll q=r/2;
if(r==l)    cout<<0<<endl;
else if(q<l) cout<<r%l<<endl;
else if(l<=q && q<=r){
    if(r%2==0){
        q--;
    }
    cout<<q<<endl;
}

}
return 0;
}
