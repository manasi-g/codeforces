#include <bits/stdc++.h>
using namespace std;

int main() {
int x;
double t;
cin>>x>>t;
double r;
if(x+0.5<=t){
    if(x%5==0){
    r=t-x-0.5;
    printf("%.2f",r);
}
else{
     printf("%.2f",t);
}

}
else{
    printf("%.2f",t);
}
}
