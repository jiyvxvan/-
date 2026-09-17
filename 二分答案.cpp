#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<long long> a(100050);
bool check(long long y)
{
    long long sum=0,shu=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>y)return false;
        if(sum+a[i]<=y)
        {
            sum+=a[i];
        }
        else{
            shu++;
            sum=a[i];
        }
    }
    return shu<=m;
    
}
long long find()
{
    long long sum = 0, maxn = 0;
    for (int i = 0; i < n; i++)
    {
        
        sum += a[i];
        maxn = max(maxn, a[i]);
    }

    long long l = maxn, r = sum; 
    long long mid;
    while(l<r)
    {
      mid=l+(r-l)/2;
      if(check(mid))r=mid;
        else l=mid+1;
        
    }
    return l;
    
    
}


int main()
{
    cin>>n;
    cin>>m;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
    cout<<find();
    return 0;
}
