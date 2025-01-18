/*************************************************************************
	> File Name: 34.HZOJ_133.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Mon 14 Oct 2024 09:13:37 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int t = 0;
        for (int j = 1; j <= n - i + 1; j++) {
            if (t) printf("\t"); 
            t += printf("%d*%d=%d", i, j + i - 1, i * (j + i - 1));
        }
        if (i != n) printf("\n");
    }
    return 0;
}
