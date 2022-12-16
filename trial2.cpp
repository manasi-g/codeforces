
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    int k=0;
    string s="zz";
    for(int i=0;i<s.length();i++){
        k+=s[i]-'a'+1;
    }
    int r=26*(s[1]-'a'+1)+(s[0]-'a'+1);
    //if(s.length()==2)   k+=26;
   cout<<r;
return 0;
}
//Book Name         Author Name    
// SQL101           Manasi
//SQL101            Sharad