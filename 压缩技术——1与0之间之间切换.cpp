#include<stdio.h>
int main()
{

    int a[100000]={0};
    int i=0,h=0,l=0,w=0;
    while(scanf("%d",&a[i])==1)
    {
        i++;
    }
        int b[205][205];
    for(int j=1;j<i;j++)
    {
        for(int q=0;q<a[j];q++)
        {
            b[h][l]=w;
            l++;
            if(l==a[0])
            {
                l=0;
                h++;
            }
                
        }
        w=1-w;


    }
       for(int j=0;j<a[0];j++)
       {
           for(int q=0;q<a[0];q++)
           {
               printf("%d",b[j][q]);
           }
           printf("\n");
       }
     return 0;
    }
    
    
   


