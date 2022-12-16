#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
stack<ll>s;
stack<ll> ss;
void push1(ll x){
    s.push(x);
    if(ss.size()==0 || ss.top()>=x){
        ss.push(x);
    }
}
void pop1(){
   
     if(!ss.empty() && ss.top()==s.top()){
        ss.pop();
    }
     s.pop();
}
ll minele(){
    if(ss.empty())  return -1;
    else return ss.top();
}
int32_t main(){
fast
    push1(18);
    push1(19);
    push1(29);
    cout<<minele()<<endl;
    push1(15);
    
    push1(15);
    pop1();
    pop1();
    cout<<minele()<<endl;


return 0;
}
