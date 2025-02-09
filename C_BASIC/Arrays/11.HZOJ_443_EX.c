/*************************************************************************
	> File Name: 11.HZOJ_443.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 03:59:51 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX 10000

int main() {
    char ans[MAX + 5] = {0};
    int l, m, a, b, cnt = 0;
    scanf("%d%d", &l, &m);
    while (~scanf("%d%d", &a, &b)) {
        for (int i = a; i <= b; i++) {
            ans[i] = 1;
        }
    }
    for (int i = 0; i <= l; i++) {
        if (ans[i] == 0) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
