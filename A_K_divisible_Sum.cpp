#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,a,b;
cin>>n>>k;
if(n==k)    cout<<1<<endl;
else if(k==1)   cout<<1<<endl;
else if(n<k && k!=1){
a=k/n;
b=k%n;
if(b!=0)    a++;
cout<<a<<endl;
}
else if(n>k && k!=1){
ll c=n/k;
ll d=n%k;
if(d!=0)    c++;
k=k*c;
a=k/n;
b=k%n;
if(b!=0)    a++;
cout<<a<<endl;
}

}
}