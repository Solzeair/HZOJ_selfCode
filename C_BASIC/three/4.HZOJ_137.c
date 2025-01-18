/*************************************************************************
	> File Name: 23.HZOJ_137.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 08 Oct 2024 08:53:03 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 0, m = 65;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", m + j);
            //m += 1;更简单
        }
        printf("\n");
        m += i;//再删去这个
    }
    return 0;
}
