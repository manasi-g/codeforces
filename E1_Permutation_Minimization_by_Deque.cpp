#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,a,c;
    cin>>n;
    deque<ll>d,b;
    for(ll i=0;i<n;i++){
        cin>>a;
        d.push_back(a);
    }
    ll u=d.front();
    d.pop_front();
    b.push_back(u);
    for(ll i=1;i<n;i++){
        c=b.front();
        u=d.front();
        d.pop_front();  
        if(u<c) b.push_front(u); //lex less
    
        else b.push_back(u);
    }
    for(ll i=0;i<n;i++){
        cout<<b.at(i)<<" ";
    }
    cout<<endl;

}
return 0;
}
