/*************************************************************************
	> File Name: 7.HZOJ_198.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 08:14:03 PM CST
 ************************************************************************/

// 本题题意有误，fn 为 每次相加后取模的值
#include<stdio.h>

int main() {
    long long n, arr[3] = {0, 1, 1};
    scanf("%lld", &n);
    int i = 3;
    for (; i <= n; i++) {
        arr[i % 3] = arr[(i - 1) % 3] + arr[(i - 2) % 3];
        arr[i % 3] %= 1000000007;
    }
    // 滚动数组 易错下标值 
    // printf("%lld", arr[n % 3]);
    printf("%lld", arr[(i - 1) % 3]);
    return 0;
}

// 大整数写法
// 假设除数是大整数
int arr[3][MAX + 5] = {{0, 0}, {1, 1}, {1, 1}};
int divisor[MAX + 5] = {10, 7, 0, 0, 0, 0, 0, 0, 0, 0, 1};
int i = 3;
for (; i <= n; i++) {
    func_add(arr[(i - 1) % 3], arr[(i - 2) % 3], arr[i % 3]);
    func_div(divisor, arr[i % 3], arr[i % 3]);
}
for (int i = arr[n % 3][0]; i >= 1; i--) {
    printf("%d", arr[n % 3][i]);
}
