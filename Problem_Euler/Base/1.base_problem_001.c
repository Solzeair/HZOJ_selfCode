/*************************************************************************
	> File Name: a.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 27 Jan 2025 03:37:28 PM CST
 ************************************************************************/

#include<stdio.h>

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

