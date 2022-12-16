#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,t=0,p=0,sum=0,last=9;
cin>>n;
vector<int> ans;
while(sum<n && last>0){
    p=min(n-sum,last);
    ans.push_back(p);
    sum+=last;
    last--;
}

if(sum<n){
    cout<<-1<<endl;

}
else{
   reverse(ans.begin(), ans.end());
   

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i;
    cout<<endl;
}

}}
