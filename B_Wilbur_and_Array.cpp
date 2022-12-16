#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    fast
    int n;
    cin>>n;
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll c=0;
    ll a[n]={0};
    for(int i=0;i<n;i++){
        c+=abs(b[i]-a[i]);
        cout<<b[i]-a[i]<<" ";
        for(int j=i;j<n;j++){
            a[j]+=c;
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    cout<<c;
    return 0;
}