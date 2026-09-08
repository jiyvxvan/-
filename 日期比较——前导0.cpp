#include<stdio.h>
typedef struct{
    int year;
    int month;
    int day;
}deadline;

int main()
{
    deadline r[80];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&r[i].year,&r[i].month,&r[i].day);
    }
    
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if(r[i].year>r[j].year)
          {
              deadline t;
              t=r[i];
              r[i]=r[j];
              r[j]=t;
              continue;
          }
          if(r[i].year==r[j].year)
          {
               if(r[i].month>r[j].month)
               {
                   deadline t;
                   t=r[i];
                   r[i]=r[j];
                   r[j]=t;
                   continue;
               }
               if(r[i].month==r[j].month)
               {
                   if(r[i].day>r[j].day)
                   {
                       deadline t;
                       t=r[i];
                       r[i]=r[j];
                       r[j]=t;
                       continue;
                   }
               }
          }
      }
          
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d-%02d-%02d\n",r[i].year,r[i].month,r[i].day);
    }
    
    
    
    return 0;
}
