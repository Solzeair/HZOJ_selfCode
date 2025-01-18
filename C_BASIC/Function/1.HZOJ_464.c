/*************************************************************************
	> File Name: 36.HZOJ_464.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 15 Oct 2024 10:10:54 PM CST
 ************************************************************************/

#include<stdio.h>

int leap_year(int x, int y) {
    int tmp = 0;
    for (int i = x; i <= y; i++) {
        if ((i % 4 == 0 && i % 100) || i % 400 == 0) tmp += 1;
    }
    return tmp;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", leap_year(x, y));
    return 0;
}
