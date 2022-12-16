#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<s.length()+1;j++){
            c++;
        if(s[i]==s[j]){
            c--;
        }
    }
    }
    if(c%2==0) cout<<"CHAT WITH HER!";
    else    cout<<"IGNORE HIM!";
}