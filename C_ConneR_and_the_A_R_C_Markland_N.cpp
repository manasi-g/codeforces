#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,s,k,flag=0,l,m,sum=0,r;
cin>>n>>s>>k;
ll a[k];
ll b[n];
for(int i=0;i<k;i++){
    cin>>a[i];
    
   

}
for(int i=0;i<n;i++){
    b[i]=i+1;
   

}
sort(a,a+n);
for(int i=0;i<k;i++){
    
    if(s==a[i]){
        flag=1;
        l=i;
        m=a[i];
    }
    else{
       sum=0;
    }
}
if(flag==1){
    for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
            if(a[j]!=b[i]){
                r=a[j];
            }
    }
}
        sum=abs(r-s);
}
cout<<sum<<endl;
}
return 0;
}
