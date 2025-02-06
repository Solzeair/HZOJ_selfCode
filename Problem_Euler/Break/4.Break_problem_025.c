/*************************************************************************
	> File Name: 4.Enhance_problem_025.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 11:45:44 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX 1000

int str[3][MAX + 5] = {{0, 0}, {1, 1}, {1, 1}};

int main() {
    int n = 2;
    while (str[n % 3][0] < 1000) {
        n++;
        int *a = str[n % 3], *b = str[(n - 1) % 3], *c = str[(n - 2) % 3];
        for (int i = 1; i <= b[0]; i++) {
            a[i] = b[i] + c[i];
        }
        a[0] = b[0];
        for (int i = 1; i <= a[0]; i++) {
            if (a[i] < 10) continue;
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
            a[0] += (a[0] == i);
        }
    }
    printf("%d\n", n);
    return 0;
}

