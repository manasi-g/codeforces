#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,sum1=0,sum2=0,sum3=0;
    cin>>n>>m>>a>>b;
    sum1=n*a;
    int l=n/m;
    int r=n%m;
    sum2=l*b+r*a;
    sum3=(l+1)*b;
    if(sum1>=sum2 && sum3>=sum2)   cout<<sum2;
    else if(sum1>=sum2 && sum2>=sum3) cout<<sum3;
    else if(sum1<=sum2 && sum2>=sum1) cout<<sum1;
}