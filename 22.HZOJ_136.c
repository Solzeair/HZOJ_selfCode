/*************************************************************************
	> File Name: 22.HZOJ_136.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 08 Oct 2024 08:26:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) printf("%d\n", i);
        //if (i % 7) continue;
        //printf("%d\n", i);
    }
    return 0;
}
