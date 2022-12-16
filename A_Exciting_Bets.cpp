#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n1,n2,a,b,c,c1=0,x,gcd,y,z;
cin >> n1 >> n2;
x=max(n1,n2);

if( n1==n2){
    a=0;
    b=0;
}
else if(n1==0 || n2==0){
    if(n1>n2) {  a=n1;
    }
    else
    {
        a=n2;
    }
    b=0;
}
else if(abs(n1-n2)==1){
    a=1;
    b=0;
}

else{
    a=abs(n1-n2);
    gcd=a;
y=x/gcd+1;
z=(gcd*y)-x;
    b=z;
}
cout<<a<<" "<<b<<endl;
}
return 0;
}
