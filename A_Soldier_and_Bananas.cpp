#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    
    for(int i=0;i<w;i++){
        sum+=k*(i+1);
    }
    if(sum>n){
        cout<<sum-n;
    }
    else{
        cout<<0;
    }
}