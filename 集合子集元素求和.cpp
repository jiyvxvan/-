#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    long long s=0,t=0;
    while(cin>>a)
    {
    s+=a;
    t++;
    }
    s*=(long long)pow(2,t-1);
    cout<<s;
    return 0;
}
