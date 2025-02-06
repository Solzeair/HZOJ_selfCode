/*************************************************************************
	> File Name: 3.Enhance_problem_013_add.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 11:07:40 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX 100

void tran_s(const char *str, int *s) {
    int len = strlen(str);
    s[0] = len;
    for (int i = 0; str[i]; i++) {
        s[len - i] = str[i] - '0';
    }
    return ;
}

void add(int *a, int *b, int *c) {
    c[0] = (b[0] > a[0] ? b[0] : a[0]);
    for (int i = 1; i <= c[0] ; i++) {
        c[i] = a[i] + b[i];
    }
    for (int j = 1; j <= c[0]; j++) {
        if (c[j] < 10) continue;
        c[j + 1] += c[j] / 10;
        c[j] %= 10;
        if (j == c[0]) c[0]++;
    }
}

int main() {
    char str_a[MAX + 5] = {0}, str_b[MAX + 5] = {0};
    scanf("%s%s", str_a, str_b);
    int a[MAX + 5] = {0}, b[MAX + 5] = {0};
    tran_s(str_a, a);
    tran_s(str_b, b);
    int ans[MAX + 5] = {0};
    add(a, b, ans);
    for (int i = ans[0]; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
