#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k=0;
cin>>n;
if(n>=10){
    k+=n/10;
    n=n%10;
}
if(n>=5){
    k+=n/5;
    n%=5;
}
if(n<5){
    k+=n;
}
cout<<k;
}
