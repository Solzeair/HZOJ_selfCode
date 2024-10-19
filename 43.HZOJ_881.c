/*************************************************************************
	> File Name: 43.HZOJ_881.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Sat 19 Oct 2024 02:44:22 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //异或运算特殊，异或运算不能处理两个相同地址的交换（同一个变量的值的交换）
    //任何一个数异或它自己都等于0
    //*a ^= *b;
    //*b ^= *a;
    //*a ^= *b;
    return ;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    swap(&a, &a);
    printf("%d %d\n", a, b);
    return 0;
}
