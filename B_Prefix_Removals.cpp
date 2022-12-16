#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    string s,t="";
    cin>>s;
    int f=0;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j])  {
                f=1;
                break;
            }
        }
        if(f=0){
            for(int p=i;p<s.length();p++){ 
                t=s[p];
            }
            break;
        }
    }
    cout<<t<<endl;
}
return 0;
}
