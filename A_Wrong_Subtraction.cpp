#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k;
cin>>n>>k;
while(k--)
{if(n%10==0){
    n=n/10;
}
else{
    n--;
}
}
cout<<n;
return 0;
}
