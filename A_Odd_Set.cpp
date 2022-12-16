#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,e=0,o=0;
cin>>n;
int a[2*n];
for(int i=0;i<2*n;i++) { 
    cin>>a[i];
    if(a[i]%2==0)   e++;
    else
    {
        o++;
    }
    }
   if(e==o){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
} 
}

return 0;
}
