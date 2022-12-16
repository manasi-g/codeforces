#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n;
cin>>n;

map<char,int>m;

string s;
cin>>s;
int a=0,b=0;
for(int i=0; i<n; i++)
    {
    if(s[i]>='a' && s[i]<='z')
        {
            if(m[s[i]]==0)
                {
                    a++;
                    b=max(a,b);
                    m[s[i]]=1;
                }
            }
            else{
            m.clear();
            a=0;
        }
        }
        

        
        cout<<b<<endl;
return 0;
}
