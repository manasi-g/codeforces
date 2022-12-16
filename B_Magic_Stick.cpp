#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll x,y,flag=0;
cin>>x>>y;
if(x==1 && y>1) cout<<"NO"<<endl;
else if(x==2 && y>3)    cout<<"NO"<<endl;
else if(x==3 && y>3)    cout<<"NO"<<endl;
else    cout<<"YES"<<endl;

}
return 0;
}
