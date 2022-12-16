#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
long long l,i,x,sum,point;
string s;
    cin >> s;
    int ret = 0, cur = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '4')
            ret += pow(2,cur);
            //cout<<ret<<" ";
        else
            ret += pow(2,cur)*2;
            //cout<<ret<<" ";}
        cur++;
    }
    cout << ret << endl;
    
}
