#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
int n,j=0,flag=0,t=0,m=0;
string a;
cin>>n>>a;
string b="TMT";
for(int i=0;i<n;i++){
    if(a[i]=='T')   t++;
    else if(a[i]=='M')   m++;
    }




for(int i=0;i<n;i++){
    if(b[i]==a[j]){
        j++;
        if(j==n){
            cout<<"YES"<<endl;
            break;
        }
        else{
           flag=1; 
        }
    }
}
if(flag==1) cout<<"NO"<<endl;
}
return 0;
}
