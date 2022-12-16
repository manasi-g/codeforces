#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
cin>>n;
 int count = 0;
  int i=1;
while (i >0) {
  
        int sum = 0;
        int x=i;
        while (x>0) {
        
            sum=sum+x%10;
            x=x/10;
            }

        if (sum==10)  count++;
  
        if (count==n) {cout<<i;
        break;}
        i++;

}
}
