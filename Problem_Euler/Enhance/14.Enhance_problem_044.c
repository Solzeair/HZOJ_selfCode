/*************************************************************************
	> File Name: 14.Enhance_problem_044.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Feb 2025 05:01:17 PM CST
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

long long pentagonal(long long m) {
    return m * (3 * m - 1) / 2;
}

int is_val(long long (*func)(long long), int n) {
    long long l = 1, r = n, mid = 0;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (func(mid) == n) return 1;
        if (func(mid) > n) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}

int main() {
    long long j = 1, ans = INT32_MAX;
    while (pentagonal(j + 1) - pentagonal(j) < ans) {
        j++;
        for (int i = j - 1; i >= 1 && pentagonal(j) - pentagonal(i) < ans; i--) {
            long long b = pentagonal(j), a = pentagonal(i);
            if (!is_val(pentagonal, b + a)) continue;
            if (!is_val(pentagonal, b - a)) continue;
            printf("%lld -> %lld\n", b, a);
            ans = b - a;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
