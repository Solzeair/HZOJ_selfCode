/*************************************************************************
	> File Name: 10.Enhance_problem_017.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 01 Feb 2025 03:44:12 PM CST
 ************************************************************************/

#include<stdio.h>

int getNum(int x) {
    //static 关键字，在函数内部定义，函数调用结束后该变量的值也会保留
    //下一次调用该函数时，该变量不会重新初始化，而是继续上一次的值。
    static int arr1[20] = {
        0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 
        6, 6, 8, 8, 7, 7, 9, 8, 8, 
    };
    static int arr2[10] = {
        0, 0, 6, 6, 5, 5, 5, 7, 6, 6 
    };
    if (x < 20) return arr1[x];
    if (x < 100) return arr2[x / 10] + arr1[x % 10];
    if (x < 1000) {
        if (x % 100 == 0) return arr1[x / 100] + 7;
        return arr1[x / 100] + 10 + getNum(x % 100);
    }
    return 11;
}
int main() {
    int sum = 0; 
    for (int i = 1; i <= 1000; i++) {
        sum += getNum(i);
    }
    printf("%d\n", sum);
    return 0;
}
