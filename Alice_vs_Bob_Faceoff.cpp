#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k,f=0,c=0,p,flag=0,o=0;
    cin>>n;
    k=n;
    while(n!=0){
        if(n%2!0)   n--;
    }
    if(o%2==0)  cout<<"Bob"<<endl;
    else    cout<<"Alice"<<endl;
}
return 0;
}
