#include<stdio.h>
int main()
{
     int x1,x2;
     int y1,y2;
    scanf("%d %d",&x1,&x2);
    scanf("%d %d",&y1,&y2);
    int min= -2147483648;
    int max= 2147483647;
         if((long long)x1*y1>max||(long long)x1*y1<min||(long long)x1*y2>max||(long long)x1*y2<min||(long long)x2*y1>max||(long long)x2*y1<min||(long long)x2*y2>max||(long long)x2*y2<min)
         {
             printf("long long int");
         }
else{
    printf("int");
}
    
    return 0;
}
