#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll power(int x, unsigned int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
ll countDigit(long long n) {
  return floor(log10(n) + 1);
}
 
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll x1,p1,x2,p2,q,v;
    cin>>x1>>p1;
    cin>>x2>>p2;
    q=countDigit(x1)+p1;
    v=countDigit(x2)+p2;
    
  

    if(q==v){
        if(p1>p2){
            x1=x1*pow(10,(p1-p2));
        }
        else if(p1<p2)  x2=x2*pow(10,(p2-p1));
        if(x1==x2)   cout<<"="<<endl;
        else if(x1>x2)  cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    else if(q>v) cout<<">"<<endl;
     else cout<<"<"<<endl;
    
}
return 0;
}
