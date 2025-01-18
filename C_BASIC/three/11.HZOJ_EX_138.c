/*************************************************************************
	> File Name: 33.HZOJ_138.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Mon 14 Oct 2024 09:03:23 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf("AA");
        }
        printf("\n");
    }
    return 0;
}
