#include<bits/stdc++.h>
using namespace std;
string c="0123456789abcdef";
string s8;
const int maxn=3005;
int a[maxn],t=0;

int main()
{
    cin>>s8;
    if(s8=="0")
    {
        cout<<0;return 0;
    }
    for(int i=s8.size()-1;i>=0;i--,t+=3)
    {
        int d=s8[i]-'0';
        a[t]  =d & 1; 
        a[t+1]=(d >> 1) & 1;
        a[t+2]=(d >> 2) & 1;
    }
    int rem=t%4;
    if(rem!=0)
    {
        int need=4-rem;
        for (int i=0;i<need;i++)
        a[t+i] = 0;
        t+=need;
    }
    bool first=true;
    for(int i=t-1;i>=0;i-=4)
    {
        int sum=a[i] * 8 + a[i-1] * 4 + a[i-2] * 2 + a[i-3] * 1;
        if (first && sum == 0) continue;
        first = false;
        cout << c[sum];
    }
    return 0;
}
