#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
class st{
    public:
    stack <ll> s;
    ll minele=0;



void push1(ll x){
    if(s.empty())  { 
        minele=x;
        s.push(x);
    }
    else if(x>=minele)   s.push(x);
    else{
        s.push(2*x-minele);
        minele=x;
    }
}
ll top1(){
    if(s.empty())   return -1; 
    else if(s.top()>=minele) return s.top();
    else
    {
        return minele;
    } 
}
void pop1(){
    if(s.top()>=minele) s.pop();
    else
    {
        minele=2*minele-s.top();
        s.pop();
    }
}
ll minelemen(){
    if(s.empty())   return -1;
    else
    {
        return minele;
    }
}
};

int32_t main(){
fast
    st s;
    s.push1(18);

    s.push1(19);
    s.push1(29);
    cout<<s.minelemen()<<endl;
    s.push1(15);
     cout<<s.minelemen()<<endl;
    s.push1(15);
    s.pop1();
     cout<<s.minelemen()<<endl;
    s.pop1();
    cout<<s.minelemen()<<endl;
return 0;
}
