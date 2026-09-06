#include<stdio.h>
void s(int a[],int x,int y)
{
    int t;
    t=a[x];
    a[x]=a[y];
    a[y]=t;
}
void p(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void z(int a[],int x,int y)
{
    if(x==y)
    {
        p(a,y+1);
        return;
    }
    for(int i=x;i<=y;i++)
    {
        s(a,x,i);
        z(a,x+1,y);
        s(a,x,i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    z(a,0,n-1);
    
    return 0;
}
