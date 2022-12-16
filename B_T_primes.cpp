#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void isPrime(ll flag,ll y){
 
    for(ll i=2;i*i<=y;i++){
        //cout<<i<<" ";
        if(y%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1 || y==1){
        cout<<"NO"<<endl;
    }
    else if(flag==0){
        cout<<"YES"<<endl;
    }
}
 
int32_t main(){
    fast
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        ll y=sqrt(x);
        if(y*y==x){
            int flag=0;
            isPrime(flag,y);
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
