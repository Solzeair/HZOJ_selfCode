/*************************************************************************
	> File Name: 24.HZOJ_139.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 09 Oct 2024 12:40:16 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {//第0行，0到n-1行
        for (int j = 0; j < (n - 1) - i; j++) printf(" ");//第i行和第n-1行隔多少行，每隔一行打印一次
        for (int j = 0; j < i + 1; j++) printf("AA");//第 i 行打印 i+1 一次
        printf("\n");
    }
    for (int i = n; i < 2 * n - 1; i++) {
        for (int j = 0; j < i - (n - 1); j++) printf(" ");
        for (int j = 0; j < ((2 * n - 1 - 1) - i) + 1; j++) printf("AA");
        if (i < 2 * n - 1 - 1) printf("\n");//末尾不换行
    }
    return 0;
}

/*更优解，采用abs函数，使图形上下对称
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < abs(i - n + 1); j++) printf(" ");
        for (int j = 0; j <= n - 1 - abs(i - n + 1); j++) printf("AA");
        if (i < 2 * n - 1) printf("\n");
    }
    return 0;
}
*/



