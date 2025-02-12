/*************************************************************************
	> File Name: 5.HZOJ_178.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 07:07:45 PM CST
 ************************************************************************/

#include<stdio.h>

void func(int n) {
    if (n == 1) {
        printf("A");
        return ;
    }
    func(n - 1);
    printf("%c", 'A' + n - 1);
    func(n - 1);
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
