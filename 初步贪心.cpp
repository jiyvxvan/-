#include<bits/stdc++.h>
using namespace std;
double a[105],m[105],v[105],ans,t;
int main()
{
   int n;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>v[i];
        a[i]=v[i]/m[i];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(m[j],m[j+1]);
                swap(v[j],v[j+1]);
            }
        }
    for(int i=0;i<n;i++)
    {
        if(t-m[i]>-0.000001)
        {
            ans+=v[i];
            t-=m[i];
        }
        else
        {
            ans+=t*a[i];
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}
