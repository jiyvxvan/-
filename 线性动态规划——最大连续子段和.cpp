#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200005];
    int n;
    int ans=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int dp[200005]={0};
    
    for(int i=1;i<=n;i++)
    {
        if(i==1)dp[i]=a[i];
        else{
        dp[i]=max(a[i],dp[i-1]+a[i]);
        }
        ans=max(dp[i],ans);
        
    }
    cout<<ans;
    return 0;
}
