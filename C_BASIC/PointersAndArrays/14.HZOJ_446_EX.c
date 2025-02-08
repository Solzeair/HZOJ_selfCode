/*************************************************************************
	> File Name: 14.HZOJ_446_EX.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 04:29:06 PM CST
 ************************************************************************/

#include<stdio.h>
int str[10][10] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int k = 0; k < n / 2 + 1; k++) {
        for (int i = k; i < n - k; i++) {
            for (int j = k; j < n - k; j++) {
                str[i][j] += 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) printf(" ");
            printf("%d", str[i][j]);
        }
        printf("\n");
    }
    return 0;
}
