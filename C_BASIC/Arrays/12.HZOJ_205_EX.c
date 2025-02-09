/*************************************************************************
	> File Name: 12.HZOJ_205.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 04:13:37 PM CST
 ************************************************************************/

#include<stdio.h>

int str[35][35] = {0};

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &str[i][j]);
            sum += str[i][j];
        }
        printf("%.6lf\n", sum / m);
    }
    return 0;
}
