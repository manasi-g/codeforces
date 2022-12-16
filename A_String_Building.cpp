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
        cin >> s;
        ll n = s.length(), c = 1, f = 0;
        for(ll i = 0; i < n-1; i++){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
               if(c<2){
                    f = 1;
                    break;
                }
                c = 1;
            }
        }
        if(c<2){
            f = 1;
        }

        if(f == 0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout << endl;
    }
    return 0;
}