#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string s;
cin>>s;
int n,p,u;
cin>>n;
string a[12]={"January", "February", "March", "April", "May", "June","July","August", "September","October",
	"November", "December"};
    for(int i=0;i<12;i++)
        {if(s==a[i]){
            p=i;
            break;
    }}
    //int k=n%12;
  
        u=(n+p)%12;
   
    cout<<a[u];
return 0;
}
