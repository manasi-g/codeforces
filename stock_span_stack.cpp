#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,c;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    stack<pair<ll,ll>>s;
    stack<pair<ll,ll>>s1;
    vector<ll>v;
    vector<ll>v1;
    vector<ll>v2;
    for(ll i=0;i<n;i++){
      
        if(s.empty())   v.push_back(-1);
        else if(!s.empty() && s.top().first<a[i]){
           v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>=a[i]){
            while((!s.empty() && s.top().first>=a[i])){
               
                s.pop();
            }
            if(s.empty())  v.push_back(-1);
            else
            {
               v.push_back(s.top().second);
            }
        }
            s.push(make_pair(a[i],i));

    }
    for(ll i=n-1;i>=0;i--){
       
        if(s1.empty())   v1.push_back(n);
        else if(!s1.empty() && s1.top().first<a[i]){
             v1.push_back(s1.top().second);
        }
        else if(!s1.empty() && s1.top().first>=a[i]){
            while((!s1.empty() && s1.top().first>=a[i])){
                
                s1.pop();
            }
            if(s1.empty())   v1.push_back(n);
            else
            {
                v1.push_back(s1.top().second);
            }
        }
            s1.push(make_pair(a[i],i));

    }
    reverse(v1.begin(),v1.end());
    /* for(ll i=0;i<v.size();i++)  {cout<<v[i]<<" ";}
    cout<<endl;
    for(ll i=0;i<v1.size();i++)  {cout<<v1[i]<<" ";}
    cout<<endl; */
    for(ll i=0;i<v.size();i++)  {
            ll r=(v1[i]-v[i]-1)*a[i];
            v2.push_back(r);
           // cout<<r<<" ";
        }
    cout<<*max_element(v2.begin(),v2.end());
}
return 0;
}
