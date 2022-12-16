#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast

ll n,p=0,k=0,sum=0;
cin>>n;
if(n==1){
    sum=1;
}
else if(n==2){
    sum=3;
}
else
{
    p=(n-2)*(n-2);
    sum=p;
    while(n!=0)
    { sum=sum+n;
    n--;
    }
}
cout<<sum;


}


