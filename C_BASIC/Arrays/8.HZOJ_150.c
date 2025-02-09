/*************************************************************************
	> File Name: 8.HZOJ_150.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 03:09:59 PM CST
 ************************************************************************/

#include<stdio.h>

int str[205][205] = {0};
int ans[205][205] = {0};

int main() {
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &str[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = str[n - 1 - j][i];   
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) putchar(' ');
            printf("%d", ans[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
