/*************************************************************************
	> File Name: 12.Enhance_problem_033.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 01 Feb 2025 05:11:36 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int x, int y) {
    return (y ? gcd(y, x % y) : x);
}

int is_val(int x, int y) {
    int x2 = x / 10, x1 = x % 10;
    int y2 = y / 10, y1 = y % 10;
    if (x1 == 0 || y1 == 0) return 0;
    if (x1 == y1 && x2 * y == y2 * x) return 1;
    if (x1 == y2 && x2 * y == y1 * x) return 1;
    if (x2 == y1 && x1 * y == y2 * x) return 1;
    if (x2 == y2 && x1 * y == y1 * x) return 1;
    return 0;
}

int main() {
    int a = 1, b = 1, c = 1;
    for (int i = 10; i < 100; i++) {
        for (int j = i + 1; j < 100; j++){
            if (!is_val(i, j)) continue;
            a *= i;
            b *= j;
            c = gcd(a, b);
            a /= c;
            b /= c;
        }
    }
    printf("%d\n", b);
    return 0;
}
