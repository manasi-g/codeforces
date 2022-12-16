#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
string s;
cin>>n>>s;
        char a=s[0];
        bool flag=0;
        for(int i=1;i<n;i++) {
            if(s[i]!=a){
                flag=1;
                break;
            }
        }
        if(flag==1) {
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++) {
                if (s[i]!=s[i+1]) {
                    cout<<s[i]<<s[i+1]<<endl;
                    break;
                }
            }
        }
        else {
            cout<<"NO"<<endl;
        }
return 0;
}
