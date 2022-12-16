#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,max=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        sum=sum-a[i];
        if(sum>max) max=sum;
        sum=sum+b[i];
        if(sum>max) max=sum;
    }
    cout<<max;

}