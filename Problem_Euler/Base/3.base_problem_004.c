/*************************************************************************
	> File Name: 3.base_problem_003.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 30 Jan 2025 02:41:25 PM CST
 ************************************************************************/

#include<stdio.h>

//十进制回文数
int is_revese(int n, int size) {
    int temp = 0, x = n;
    while (x) {
        temp = temp * size + x % size;
        x /= size;
    }
    return temp == n;
}

int main() {
    int ans = 0;
    for (int a = 999; a >= 100; a--) {
        for (int b = a; b >= 100; b--) {
            if (a * b <= ans || !(is_revese(a * b, 10))) continue;
                ans = a * b;
                printf("%d * %d = %d\n", a, b, ans);
        }
    }
    printf("ans = %d\n", ans);
    return 0;
}

/*
#include<stdio.h>

int is_revese(int n) {
    int temp = 0, x = n;
    while (x) {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    return temp == n;
}

int main() {
    int ans = 0;
    for (int a = 100; a < 1000; a++) {
        for (int b = 100; b < 1000; b++) {
            if (is_revese(a * b) && a * b > ans) {
                ans = a * b;
                printf("%d * %d = %d\n", a, b, ans);
            }
        }
    }
    printf("ans = %d\n", ans);
    return 0;
}
*/
