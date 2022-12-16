#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string s;
cin>>s;
string a="hello";
int j=0;
for(int i=0;i<s.length();i++){
    if(s[i]==a[j]){
        j++;
    }
}
if(j==5)    cout<<"YES";
else cout<<"NO";
return 0;
}
