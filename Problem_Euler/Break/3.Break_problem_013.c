/*************************************************************************
	> File Name: 3.Enhance_problem_013.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 11:23:20 AM CST
 ************************************************************************/

// ./a.out < 3_Enhance_problem_013_input

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

void add(int *a, int *b) {
    b[0] = (b[0] > a[0] ? b[0] : a[0]);
    for (int i = 1; i <= b[0] ; i++) {
        b[i] = a[i] + b[i];
    }
    for (int j = 1; j <= b[0]; j++) {
        if (b[j] < 10) continue;
        b[j + 1] += b[j] / 10;
        b[j] %= 10;
        if (j == b[0]) b[0]++;
    }
}
int main() {
    char str[MAX + 5] = {0};
    int ans[MAX + 5] = {0}, temp[MAX + 5] = {0};
    // 再次读入时会清空str
    while (scanf("%s", str) != EOF) {
        tran_s(str, temp);
        add(temp, ans);
    }
    for (int i = ans[0], j = 0; j < 10; j++, i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}

