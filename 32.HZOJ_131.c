/*************************************************************************
	> File Name: 32.HZOJ_131.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Mon 14 Oct 2024 05:22:10 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, tmp, min, max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        if (i == 0) {
            min = tmp;  
            max = tmp;
            continue;
        }
        if (tmp > max) max = tmp;
        if (tmp < min) min = tmp;
    }
    printf("%d", max - min);
    return 0;
}
