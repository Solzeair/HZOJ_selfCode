/*************************************************************************
	> File Name: 2.base_problem_002.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 27 Jan 2025 05:15:02 PM CST
 ************************************************************************/
/*
// base 
#include <stdio.h>
#define MAX_N 4000000

int fib[35] = {1, 1, 2};

int main() {
    //写完程序后，将 int 类型改为 long long 类型，测试数据是否溢出
    int n = 2, sum = 0;
    while (fib[n - 1] + fib[n - 2] < MAX_N) {
        fib[n] = fib[n - 1] + fib[n - 2];
        if (fib[n] % 2 == 0) sum += fib[n];
        n += 1;
    }
    printf("%d\n", sum);
    return 0;
}*/

/*
//滚动数组
#include <stdio.h>
#define MAX_N 4000000

int fib[35] = {0, 1, 2};

int main() {
    int n = 2, sum = 2;
    while (fib[(n - 1) % 3] + fib[(n - 2) % 3] < MAX_N) {
        n += 1;
        fib[(n % 3)] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if (fib[(n % 3)] % 2 == 0) sum += fib[(n % 3)];
    }
    printf("%d\n", sum);
    return 0;
}*/

//滚动变量
#include <stdio.h>
// 4e6 是浮点型，不能用作int
#define MAX_N 4000000
//判断二进制最后一位，b为奇数，末尾为1，仅1&1=1
#define b_is_odd (b & 1)

int main() {
    int a = 1, b = 2, sum = 2;
    while (a + b < MAX_N) {
        a = a + b;
        a ^= b;
        b ^= a;
        a ^= b;
        if (!b_is_odd) sum += b;
    }
    printf("%d\n", sum);
    return 0;
}

/* 通过打表计算程序需要的内存大小
#include<stdio.h>
#define MAXSIZE 4000000

//栈（Stack）：存放局部变量、函数参数和返回地址。栈内存大小限制为 1~8 MB，
//数据段（Data Segment）：存放全局变量和静态变量。特点：空间较大
//数组 arr[MAXSIZE + 5] 的大小为 4,000,005，因此需要约 4 * 4(字节) = 16 MB 的栈内存。
//所以在main函数中定义，会导致栈溢出，只能全局变量定义
int arr[MAXSIZE + 5] = {0};

int main() {
    arr[1] = 1; arr[2] = 2;
    int n = 2;
    for (int i = 3; ; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        n += 1;
        if (arr[i] > MAXSIZE) break;
    }
    printf("%d\n", n);
    return 0;
}
*/
