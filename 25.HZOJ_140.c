/*************************************************************************
	> File Name: 25.HZOJ_140.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 09 Oct 2024 06:41:25 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    char m = 'A';
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < abs(i - n + 1); j++) printf(" ");
        for (int j = 0; j < 2 * n - 1 - 2 * abs(i - n + 1); j++) printf("%c", m);//第n-1行有最多个数2n-1个，减去2*所隔行数，等于该行个数
        if (i < 2 * n - 2) printf("\n");
        if (i < n - 1) m += 1;
        else m -= 1;
    }
    return 0;
}
