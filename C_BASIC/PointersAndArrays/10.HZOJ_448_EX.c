/*************************************************************************
	> File Name: 10.HZOJ_448.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 03:49:10 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, m, flag;
    int str[105] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &str[i]);
    }
    scanf("%d", &m);
    for (int j = 0; j < n; j++) {
        if (m != str[j]) continue;
        flag = j + 1;
        break;
    }
    printf("%d\n", flag);
    return 0;
}
