/*************************************************************************
	> File Name: 1.HZOJ_86.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Thu 26 Sep 2024 08:28:04 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", a * b * c);//printf中格式化字符串末尾尽量加/n，本题为保证输出结果一致而未加
    return 0;
}
