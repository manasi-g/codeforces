#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        ll n,k,f=0;
        cin>>n>>k;
        ll a[n];
        map<ll,ll>m;
        for(ll i=0;i<n;i++ ){
            cin>>a[i];
            m[a[i]]++;
        }
        for(ll i=0;i<n;i++ ){
            
            if(m[a[i]-k]) {
               
               f=1;
                break; 
            }
           
        }
        if(f)   cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;

    }
    return 0;
}
