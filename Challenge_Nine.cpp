#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t,p=1;
cin>>t;
while(t--){
    string s;
    cin>>s;
    
    cout<<"Case #"<<p<<": ";
    p++;
    int c=0,k;
    for(int i=0;i<s.length();i++){
        c+=s[i]-'0';
    }
    if(c%9==0)  {
        cout<<s[0]<<"0";
        for(int i=1;i<s.length();i++)   cout<<s[i];
    }
    else{
        if(c>9) {
            int o=c%9;
            k=9-o;
        }
        else      k=9-c;
        //int k=9-c;
        int a=0,f=0;
    for(int i=0;i<s.length();i++){
        int r=s[i]-'0';
        if(r==k)   continue;
        else if((r)>k){
            a=i;
            f=1;
            break;
        }
        //else    f=1;
    }
    

    if(f==0)    cout<<s<<k;
    else{
        for(int i=0;i<a;i++)    cout<<s[i];
        cout<<k;
        for(int i=a;i<s.length();i++)   cout<<s[i];
    }
    
 
    }
       cout<<endl;
}
return 0;
}
