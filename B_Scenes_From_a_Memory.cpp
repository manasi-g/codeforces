#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int isprime(ll n)
{
    if(n<=1)
      return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int32_t main(){
fast
int t;
cin>>t;
while(t--){
        ll n,f=0,u=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0;i<n;i++){
            int c=(s[i]-48);
            if(isprime(c)==0){
                cout<<1<<endl;
                cout<<s[i]<<endl;
                f=1;
                break;
            }
        }
        if(f==0){
            for(ll i=0;i<n;i++){
                for(ll j=i+1;j<n;j++){
                    int s1 = 10*(s[i]-48)+(s[j]-48);
                    if(isprime(s1)==0){
                        cout<<2<<"\n"<<s1<<"\n";
                        u=1;
                        break;
                    }
                }
                if(u==1)    break;
            }
        }
        }
return 0;
}
