#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// ASCII values 0-9(48-57) a-z(97-122) A-Z(65-90)
int main()
{
  fast int t = 1;
  cin >> t;
  while (t--)
  {
    ll n;
    cin>>n;
    ll k=log10(n);
    ll m=pow(10,k);
    
    cout<<n-m<<endl;
  }
  return 0;
}
