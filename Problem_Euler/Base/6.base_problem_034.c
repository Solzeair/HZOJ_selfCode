/*************************************************************************
	> File Name: 6.base_problem_034.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 30 Jan 2025 04:24:48 PM CST
 ************************************************************************/

//重难点：如何测定枚举的上限值
//画图，两函数，位数最大值：f(n) = 10^n - 1, 各位数相加最大值：g(n) = 9! * n
//两函数必有交点且为上限值

#include <stdio.h>
#define MAX 2540160

//打表
int fac[10] = {1};
void init_fac(int *arr) {
    for (int i = 1; i < 10; i++) {
        arr[i] += arr[i - 1] * i;
    }
    return ;
}

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += fac[x % 10];
        x /= 10;
    }
    return temp == n;
}

int main() {
    init_fac(fac);
    int sum = 0;
    for (int i = 3; i <= MAX; i++) {
        if (!(is_val(i))) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

/*求上限
#include<stdio.h>

int main() {
    int n = 0;
    for (int i = 1; i <= 9; i++) {
        n *= i;
    }
    printf("%d\n", n);
    return 0;
}
*/
