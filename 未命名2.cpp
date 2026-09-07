#include<stdio.h>
int main(){
    int l,m;
    scanf("%d %d",&l,&m);
    int a[l+1]={0};
    int u,v;
    int sum=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&u,&v);
        for(int j=u;j<=v;j++)
        {
            a[j]=1;
        }
    }
    for(int i=0;i<l+1;i++)
    {
        if(a[i]==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
    
    
    return 0;
}
