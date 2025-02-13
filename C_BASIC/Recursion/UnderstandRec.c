/*************************************************************************
	> File Name: a.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 13 Feb 2025 03:17:27 PM CST
 ************************************************************************/

#include<stdio.h>

void func(int n) {
    if (n == 1) {
        return ;
    }
    printf("前\n");
    printf("进 %d 层左递归\n", n - 1);
    func(n - 1);
    printf("出 %d 层左递归\n", n - 1);
    printf("中\n");
    printf("进 %d 层右递归\n", n - 1);
    func(n - 1);
    printf("出 %d 层右递归\n", n - 1);
    printf("后\n");
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
