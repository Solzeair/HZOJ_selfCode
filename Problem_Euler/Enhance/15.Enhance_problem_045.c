/*************************************************************************
	> File Name: 15.Enhance_problem_45.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Feb 2025 05:48:23 PM CST
 ************************************************************************/

#include<stdio.h>

long long pentagonal(long long m) {
    return m * (3 * m - 1) / 2;
}

long long heaxgonal(long long n) {
    return n * (2 * n - 1);
}

int binary_search(long long (*func)(long long), long long val) {
    long long head = 1, tail = val, mid = 0;
    while (head <= tail) {
        mid = (head + tail) / 2;
        if (func(mid) == val) return 1;
        if (func(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    int n = 144;
    while (binary_search(pentagonal, heaxgonal(n)) == 0) n++;
    printf("%lld\n", heaxgonal(n));
    return 0;
}
