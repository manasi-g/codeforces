#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2;
    int diff1=abs(x1-x2);
    int diff2=abs(y1-y2);
     if (x1 != x2 && y1 != y2 && diff1 != diff2)
        cout << -1 << endl;
    else if (x1 == x2)
        cout << x1 + diff2 << " " << y1 << " " << x2 + diff2 << " " << y2 << endl;
    else if (y1 == y2)
        cout << x1 << " " << y1 + diff1 << " " << x2 << " " << y2 + diff1 << endl;
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
