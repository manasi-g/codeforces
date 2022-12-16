#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=n-1;i>=0;i--)
    {
        for(ll j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                cout<<j+1<<" "<<j+2<<endl;
            }
        }
    }
    return 0;
}


