#include <stdio.h>

// 1. 将数组定义在全局，防止栈溢出，且能直接访问
int a[1024][1024];

// 2. 使用标准二维数组写法，不再使用 int a[b][b]
void f(int x, int y, int b, int a[][1024])
{
    if (b == 1) 
    {
        return;
    }
    
    int h = b / 2;
    
    // 左上角置0
    for (int i = x; i < x + h; i++)
    {
        for (int j = y; j < y + h; j++)
        {
            a[i][j] = 0;
        }
    }
    
    // 递归剩下三块：右上、右下、左下
    // 注意：之前你已把这里的坐标调对了，这里保持不变
    f(x + h, y, h, a);        // 右上
    f(x + h, y + h, h, a);    // 右下
    f(x, y + h, h, a);        // 左下
}

int main()
{
    int n;
    
    // 3. 处理多组输入（题目通常隐藏这个要求）
    // 如果只有单组，while 循环也只会执行一次，完全兼容。
    while (scanf("%d", &n) != EOF) 
    {
        int b = 1;
        for (int i = 0; i < n; i++)
        {
            b *= 2;
        }
        
        // 初始化为1
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < b; j++) 
            {
                a[i][j] = 1;
            }
        }
        
        // 调用递归
        f(0, 0, b, a);
        
        // 输出（无论这里怎么写，先确保上面的数据算对）
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d", a[i][j]);
                if (j < b - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
