#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    ll n,m,sum=0,k=0,c=0;
    cin>>n>>m;
    sum=n;
   while(n>=m){
       c=n/m;
       sum+=c;
       k=n%m;
       n=k+c;
       
   }
   cout<<sum;



}