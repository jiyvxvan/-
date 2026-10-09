#include<bits/stdc++.h>
using namespace std;
int w,n,a[30005];
int ans;
int main()
{
    cin>>w>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)
            continue;
        
         for(int j=i+1;j<=n;j++)
         {
             
             if(a[j]==0)
                 continue;
             
             else if(a[i]+a[j]<=w)
             {
                 ans++;
                 a[j]=0;
                 a[i]=0;
                 break;
             }
            
         }
        if(a[i]==0)continue;
        else ans++;
    }
    cout<<ans;
    
    return 0;
}
