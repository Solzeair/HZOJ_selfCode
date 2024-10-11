/*************************************************************************
	> File Name: 27.HZOJ_142.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 09 Oct 2024 07:30:31 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a = 0, b = 0, first = 0;//first判断是否打印空格
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        double tmp = i;
        int flat = 1;//质数标识
        for (int j = 2; j <= sqrt(tmp); j++) {//注意等于号，判断质数方法
            if (i % j) continue;
            flat = 0;
            break;//减少循环次数
        }
        if (flat == 1 && i / 10000 == i % 10 && i % 10000 / 1000 == i % 100 / 10) {//判断是否回文数
            if (first) printf(" ");//判断是否打印空格
            first += 1;
            printf("%d", i);//先打印再赋值
        }
    }
    return 0;
}

/*不使用sqrt函数，优化代码
#include<stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i && flag; j++) {
            if (i % j) continue;
            flag = 0;
        }
        if (flag == 0) continue;
        int x = i, y = 0;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (y != i) continue;
        if (c) printf(" ");
        c += printf("%d", i);
    }
    printf("\n");
    return 0;
}
*/