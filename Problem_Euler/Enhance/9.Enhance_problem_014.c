/*************************************************************************
	> File Name: 9.Enhance_problem_014.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 01 Feb 2025 03:10:23 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX 1000000
//记忆化数据
#define SIZE 100000

int len[SIZE + 5] = {0}; 
int func_len(long long n) {
    if (n == 1) return 1;
    if (n <= SIZE && len[n]) return len[n];
    int temp = ((n & 1) ? func_len(3 * n + 1) : func_len(n >> 1)) + 1;
    if (n <= SIZE) len[n] = temp;
    return temp;
}

int main() {
    int ans = 0, len = 0, temp_len = 0;
    for (int i = 1; i < MAX; i++) {
        temp_len = func_len(i);
        if (temp_len <= len) continue;
        ans = i;
        len = temp_len;
    }
    printf("ans = %d, len = %d\n", ans, len);
    return 0;
}
