#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll div3(ll a){
    ll k=a,sum=0;
    string q;
    q=std::to_string(a);
   for(int i=0;i<q.length();i++){
       sum+=q[i]-'0';
   }
    if(sum%3==0)    return 1;
    else    return 0;
}
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    string l,r;
    ll c=0;
    cin>>l>>r;
        stringstream geek(l);
        stringstream geek(r);
        int x = 0,y=0;
        geek >> x;
        geek >> y;

    for(ll i=x;i<=y;i++){
       ll u=div3(i);
       if(u==1) c++;
    }
    cout<<c<<endl;
}
return 0;
}
