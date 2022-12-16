#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
int t;
cin>>t;
int p=1;
while(t--){
    string a,b;
    cin>>a>>b;
    int j=0,c=0,k=0;
    for(int i=0;i<b.length();i++){
        if(a[j]==b[i]) {
            k++;    j++;
        }
        else  {
            c++;
            continue;
        }  
    }
    cout<<"Case #"<<p<<": ";
    p++;
    if(k==a.length()){
        cout<<c<<endl;
    }
    else    cout<<"IMPOSSIBLE"<<endl;
}
}
