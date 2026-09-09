#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int h[105][100005];
    for(int i=1;i<a+1;i++)
     {
         for(int j=1;j<n+1;j++)
         {
             scanf("%d",&h[i][j]);
         }
     }
    
    int hsum[100005]={0};
    int g[100005];
    for(int i=1;i<n+1;i++)
    {
        g[i]=i;
    }
     for(int i=1;i<a+1;i++)
     {
         for(int j=1;j<n+1;j++)
         {
             hsum[j]+=h[i][j];
         }
     }
     for(int i=1;i<n;i++)
     {
         for(int j=i+1;j<n+1;j++)
         {
             if(hsum[g[i]]<hsum[g[j]])
             {
                 int t=g[i];
                 g[i]=g[j];
                 g[j]=t;
             }
         }
     }
     int s=1;
      for(int i=1;i<n+1;i++)
      {
         if(h[b][i]>h[b][s])
         {
             s=i;
         }
      }
      int t=0;
      for(int i=1;i<m+1;i++)
      {
          if(g[i]==s)
          {
              t=1;
              int q=g[i];
              for(int j=i;j>1;j--)
              {
                  g[j]=g[j-1];
              }
              g[1]=q;
              break;
          }
      }
     if(t==0)
     {
         g[m]=s;
     }
     for(int i=1;i<m+1;i++)
     {
         printf("%d ",g[i]);
     }
     
    return 0;
}
