#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=5){
        cout<<1;
    }
    
    else{
        int r=n%5;
        int d=n/5;
        if(r==0)    cout<<d;
        else    cout<<d+1;
    }
}