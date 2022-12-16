#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,sum=0,count=0,j=0,r=0,y=0;
cin>>n;
int a[n],b[n],c[n],d[n];
for(int i=0;i<n;i++)    cin>>a[i];

vector<pair<int,int>>v;

for(int i=0;i<n;i++){
    cin>>b[i];
    c[i]=a[i]-b[i];
    int k=a[i]-b[i];
    if(a[i]==b[i]){
        y++;
    }
    d[i]=c[i];
    
    count+=abs(a[i]-b[i]);
    
    //cout<<c1<<" ";
    sum+=c[i];

}

count/=2;


if(sum!=0) cout<<-1<<endl;

else if(y==n) cout<<0<<endl;

else{
cout<<count<<endl;
int u[count],v[count];
ll i=0,j=0;
while(i!=n){
    if(c[i]>0){
        u[j]=i+1;
        j++;
        c[i]--;
    }
    else{
        i++;
    }
}
i=0;
j=0;
ll g=0,h=0;
while(i!=n){
    if(c[i]<0){
        v[j]=i+1;
        j++;
        c[i]++;
    }
    else{
        i++;
    }
}
for(int i=0;i<count;i++){
    cout<<u[i]<<" "<<v[i]<<endl;
}
}




}}
