#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){

    string s;
        cin>>s;
        int n=s.length(),flag=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1] && s[i]=='1'){
                flag=1;
            }
            if(flag==1 && (s[i]==s[i+1] && s[i]=='0')){
                flag=2;
                break;
            }
        }
        if(flag==2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
}
return 0;}
