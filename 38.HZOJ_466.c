/*************************************************************************
	> File Name: 38.HZOJ_466.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 15 Oct 2024 10:49:28 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int n) {
    //回文数个数
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        //判断回文数
        int x = i, y = 0;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (y == i) sum += 1;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
    return 0;
}
