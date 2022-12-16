#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
string a,b;
cin>>a>>b;
ll r,c=0,p,q;
if(a==b){
    cout<<"YES"<<endl;
}
else if(b.length()>(2*a.length()-1)){
cout<<"NO"<<endl;
}
else{
for(ll i=0;i<a.length();i++){
   
        if(b[0]==a[i]){
            r=i;
            break;
        }

}
cout<<r<<" ";
ll j=0,i;
for( i=r;i<a.length();i++){
   
        if(b[j]==a[i]){
            c++;
        }
        else{
            p=i;
            break;
        }
        j++;
        //cout<<i<<" ";

}
//i--; j--;
cout<<c<<" "<<i<<" "<<j<<" ";

for(ll w=i-1;w>=0;w--){
   
        if(b[j]==a[w]){
            c++;
        }
        else{
           
            break;
        }
        j--;

}
cout<<c<<" ";
if(b.length()==c){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
}
return 0;
}
