/*************************************************************************
	> File Name: 31.HZOJ_123.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Mon 14 Oct 2024 05:13:30 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d;
    int flag = 0;
    scanf("%d%d\n%d%d", &a, &b, &c, &d);
    if (a < c) {
        if (b >= d) flag = 1;
    } else if (a > c) {
        if (b <= d) flag = 1;
    } else {
        flag = 1;
    }
    printf("%s", flag ? "YES" : "NO");
    return 0;
}
