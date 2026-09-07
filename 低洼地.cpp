#include<stdio.h>
int f(int x, int n, int a[], int sum)
{
    int i = x;
    // 跳过开头上升或平坦的部分
    while(i < n - 1 && a[i] <= a[i+1]) {
        i++;
    }
    
    // 如果到达末尾，返回
    if(i >= n - 1) return sum;
    
    // 找到下降段（i指向下降开始位置）
    while(i < n - 1 && a[i] >= a[i+1]) {
        i++;
    }
    
    // 如果下降段后没有更多元素，返回
    if(i >= n - 1) return sum;
    
    // 找到上升段（完成一个低洼地）
    while(i < n - 1 && a[i] <= a[i+1]) {
        i++;
    }
    
    // 找到一个完整的低洼地
    sum++;
    
    // 继续从当前位置查找
    return f(i, n, a, sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[10005];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int sum = 0;
    sum = f(0, n, a, sum);  // 从0开始
    printf("%d\n", sum);
    
    return 0;
}
