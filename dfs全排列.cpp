#include<bits/stdc++.h>
using namespace std;
 int n,p;
int a[15];
bool v[15];
void dfs(int k)
{
    if(k>p)
    {
        for(int i=1;i<=p;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=1;i<=n;i++)
    {
        if(!v[i])
        {
            v[i]=true;
            a[k]=i;
            dfs(k+1);
            v[i]=false;
        }
    }
}
int main()
{
   
    cin>>n>>p;
    dfs(1);
    return 0;
}
