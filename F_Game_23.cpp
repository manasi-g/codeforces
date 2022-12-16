#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n,m,c=0;
    cin>>n>>m;
    if(n==m)    cout<<0<<endl;
    else if(n>m)    cout<<-1<<endl;
    else if(m%n!=0) cout<<-1;
    else{
        ll k=m/n;
        while(k%2==0) { k/=2; 
        c++;}
        while(k%3==0){
            k/=3;
            c++;
        }
        if(k==1)cout<<c<<endl;
        else cout<<-1<<endl;
    }
    //cout<<51840/120;
return 0;
}
