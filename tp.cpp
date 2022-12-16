#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define n 100

class stack{
    int top;
    ll* a;
    public:
    stack(){
            a=new ll[n];
            top=-1;
    }

void push(int x){
    if(top==n-1){
        cout<<"stack overflow";
        return;
    }
    top++;
    a[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"stack is empty";
        return;
    }
    top--;
}
int Top(){
    if(top==-1){
        cout<<"stack is empty";
        return -1;
    }
    return a[top];
}
bool empty(){
    if(top==-1){
        return true;
    }
    return false;
}


int32_t main(){
fast
stack s;
s.push(1);
s.push(2);
cout<<s.Top();
ll d=1e-17;
return 0;
}
};