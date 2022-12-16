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
    int r=0;
    
    int k[26]={0};

    for(ll i=0;i<a.length();i++){
        k[a[i]-'a']=i;
        //cout<<a[i]-'a'<<" ";
    }
    
    for(ll i=1;i<b.length();i++){
        r+=abs(k[b[i]-'a']-k[b[i-1]-'a']);
        //cout<<r<< " ";
    }
    cout<<r<<endl;

}
return 0;
}
