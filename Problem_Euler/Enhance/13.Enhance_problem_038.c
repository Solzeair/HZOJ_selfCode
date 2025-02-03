/*************************************************************************
	> File Name: 13.Enhance_problem_038.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Feb 2025 04:15:24 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 10000

int digit(int x) {
    return (floor(log10(x)) + 1);
}

int calc(int n) {
    int cnt = 1, ans = 0;
    while (digit(ans) < 9) {
        ans *= (int)pow(10, digit(n * cnt));
        ans += n * cnt;
        cnt++;
    }
    if (digit(ans) - 9) return 0;
    int s[10] = {1, 0};
    int temp = ans;
    while (temp) {
        if (s[temp % 10]) return 0;
        s[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}

int main() {
    int ans = 0, temp = 0;
    for (int i = 1; i < MAX; i++) {
        temp = calc(i);
        if (temp <= ans) continue;
        ans = temp;
    }
    printf("%d\n", ans);
    return 0;
}
