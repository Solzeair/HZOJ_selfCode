/*************************************************************************
	> File Name: 14.Enhance_problem_binary_search.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Feb 2025 05:33:00 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 500

//待查找的区间是满足单调递增的
int binary_search(int *arr, int n, int val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == val) return mid;
        if (arr[mid] < val) head = mid + 1; 
        else tail = mid - 1;
    }
    return -1;
}

//数组：展开的函数
//函数：压缩的数组
//y = f(x), arr[0] = 123

int main() {
    int arr[MAX_N + 5] = {0}, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    while (scanf("%d", &k) != EOF) {
        int index = binary_search(arr, n, k);
        printf("search %d from array: %d\n", k, index);
    }
    return 0;
}

/* 二分查找函数
#include <stdio.h>

int f(int x) {
    return x * x * x;
}

//单调递增
int binary_search(int (*func)(int), int val) {
    int head = 1, tail = val, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == val) return 1;
        if (func(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}


int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%s\n", binary_search(f, n) ? "YES" : "NO");
    }
    return 0;
}
*/
