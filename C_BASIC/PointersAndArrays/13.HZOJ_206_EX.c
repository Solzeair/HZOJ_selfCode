/*************************************************************************
	> File Name: 13.HZOJ_206_EX.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 04:21:19 PM CST
 ************************************************************************/

#include<stdio.h>

int str[35][35] = {0};

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &str[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += str[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
