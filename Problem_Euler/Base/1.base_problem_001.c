/*************************************************************************
	> File Name: a.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 27 Jan 2025 03:37:28 PM CST
 ************************************************************************/
/*
#include<stdio.h>

// 注意要加括号，不然会出错，变成 !n % 3 == 0 || n % 5 == 0
#define isbeishu(n) (n % 3 == 0 || n % 5 == 0)

void func(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (isbeishu(i)) sum += i;
    }
    printf("%d\n", sum);
    return ;
}

int main() {
    func(1000);
    return 0;
}
*/

// 更优解
#include <stdio.h>

int main() {
    int sum_3 = (3 + 999) * (999 / 3) / 2;
    int sum_5 = (5 + 995) * (999 / 5) / 2;
    int sum_15 = (15 + 999 / 15 * 15) * (999 / 15) / 2;
    printf("%d\n", sum_3 + sum_5 - sum_15);
    return 0;
}
