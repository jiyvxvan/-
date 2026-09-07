#include<stdio.h>
int zhi(int x)
{
    if(x<2)return 0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)return 0;
        
    }
    return 1;
}



int main()
{
    int n;
    scanf("%d",&n);
    for(int i=4;i<=n;i+=2)
    {
       for(int j=2;j<=i/2;j++)
       {
           if(zhi(j))
           {
               int q=i-j;
               if(zhi(q))
               {
                   printf("%d=%d+%d\n",i,j,q);
                   
               }
           }
       }



        
    }





    
    return 0;
}
