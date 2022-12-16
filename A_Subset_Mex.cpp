#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,sum=0,max=-100000,c=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++) {   cin>>a[i];
if(a[i]>max){
    max=a[i];
}}
max++;
int b[max]={0};
for(int i=0;i<n;i++){
    b[a[i]]++;
}
for(int i=0;i<max;i++){
   
     if(b[i]==1){
        c++;
    }
     if(b[i]>0){
        b[i]--;
        
    }
    
    else{
        sum+=i;
       
        break;
    }

}
if(c==max){
    sum+=max;
}
else
{for(int i=0;i<max;i++){
     if(b[i]==1){
        c++;
    }
    if(b[i]>0){
        b[i]--;
        
    }
    else{
        sum+=i;
        break;
    }
}
if(c==max){
    sum+=max;
}}
cout<<sum<<endl;
}
return 0;
}
