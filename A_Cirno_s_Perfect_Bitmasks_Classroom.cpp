#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll x;
    cin>>x;
    if(x==1)    cout<<3<<endl;
    else if(x%2)    cout<<1<<endl;
    else{
        ll k=x,c=0;
        while(k%2==0){
            k/=2;
            c++;
        }
       // cout<<c<<" ";
    if(k==1)    cout<<x+1<<endl;
    else{
        ll exponent=c, base=2, result=1;
        while (exponent != 0) {
        result *= base;
        --exponent;
    }
        cout<<result<<endl;
    }
    }
}
return 0;
}
