#include<bits/stdc++.h>
#define int long long
using namespace std;
string c="0123456789ABCDEF";
void f(int x,int m)
{
    if(x/m)f(x/m,m);
        cout<<c[x%m];
}
signed main()
{
    int x,m;
    cin>>x>>m;
    f(x,m);
    
    return 0;
}
