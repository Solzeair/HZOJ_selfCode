/*************************************************************************
	> File Name: 11.Enhance_problem_032.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 01 Feb 2025 04:30:50 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 100000

// 求 a 进制下，10进制正整数 b 的数位
// digit = floor(log(b) / log(a)) + 1
int digit(int n) {
    return floor(log10(n)) + 1;
}

int addNum(int m, int *ptr) {
    while(m) {
        if (ptr[m % 10]) return 0;
        ptr[m % 10] += 1;
        m /= 10;
    }
    return 1;
}

int is_val(int x, int y, int z) {
    if (digit(x) + digit(y) + digit(z) - 9) return 0;
    int s[10] = {1, 0}, flag = 1;
    flag = flag && addNum(x, s); 
    flag = flag && addNum(y, s); 
    flag = flag && addNum(z, s); 
    if (!flag) return 0;
    return 1;
}

int is_arr[MAX + 5] = {0};

int main() {
    int sum = 0;
    for (int i = 1; i < 100; i++){
        for (int j = i + 1; j < 10000; j++) {
            if (!is_val(i, j, i * j)) continue;
            if (is_arr[i * j]) continue;
            is_arr[i * j] = 1;
            sum += i * j;
        }
    }
    printf("%d\n", sum);
    return 0;
}
