#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n,m,x;
cin>>n>>m;
if (m>n)
            x = -1;
        else
        {
            if (n % 2 == 0)
                x = n / 2;
            else
                x = (n / 2) + 1;
            while (x%m != 0)
            {
                x++;
            }
        }
        
        cout << x;
return 0;
}
