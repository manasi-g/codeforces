#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k;
cin>>n>>k;
if(k<=(n+1)/2)
    {
        cout << k*2-1 << endl;
    }
else
    {
        cout << (k-(n+1)/2) * 2 << endl;
    }
return 0;
}
