#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,c=0,sum=0,c1=0,c2=0,c3=0,p=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==4){
        c++;
    }
    else if(a[i]==1)     c1++;
    else if(a[i]==2)    c2++;
    else if(a[i]==3)    c3++;
}

if(c2%2==0) c+=c2/2;
else {c+=(c2/2);
p=2;}
if(c1==c3) {c+=c1;
        if(p==2)
            {c+=p-1;}}
else if(c1>c3){
        c+=c3;
        ll s=c1-c3;
        s+=p;
        if(s%4==0){
            c+=s/4;
        }
        else{
            c+=s/4+1;
        }
}
else{
        c+=c1;
        c+=c3-c1;
        if(p==2)
        {c+=p-1;}
}

cout<<c<<endl;
return 0;
}
