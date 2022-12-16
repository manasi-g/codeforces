#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    string s,a,b,c;
    cin>>s;
    int c1=0;
    int l=1;
    a="abcdefghijklmnopqrstuvwxyz";
    b=s;
    sort(s.begin(),s.end());
    int n=s.length();
    for(int i=0;i<=n;i++){
        //cout<<int(s[i])<<" ";
        if((int(s[i])-97)==i){
            c1=c1+1;
        }
    }
    //cout<<c;
    string k="a";
    if(c1==n)   {
        for(int i=1;i<=n;i++){
       k=k+a[i];


    }
    }
    cout<<l<<" ";
    if(l==n && c1==n){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
return 0;
}
