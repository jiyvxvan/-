#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
int found=0;
void f(int x,int y)
{
   if(x<1||x>n||y<1||y>m)return;
    if(a[x][y]=='#')return;
    if(found)return;
    if(a[x][y]=='1')return;
    a[x][y]='1';
    if(x==n&&y==m)
    {
        found=1;
        return ;
    }
    f(x-1,y);
    f(x+1,y);
    f(x,y-1);
    f(x,y+1); 
}
int main()
{   
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    
   if(a[n][m]=='#')
   {
       cout<<"No";
       return 0;
   }
    f(1,1);
    if(found)cout<<"Yes";
    else cout<<"No";
    return 0;
}
