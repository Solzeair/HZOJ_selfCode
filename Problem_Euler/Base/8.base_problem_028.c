/*************************************************************************
	> File Name: 8.base_problem_038.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 30 Jan 2025 05:05:01 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAXSIZE 1001

int main() {
    int sum = 1;
    for (int l = 3; l <= MAXSIZE; l += 2) {
        //分析问题时的结论
        sum += 4 * l * l - 6 * l + 6;
    }
    printf("%d\n", sum);
    return 0;
}
