/*************************************************************************
	> File Name: 8.Enhance_problem_011.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 01 Feb 2025 02:47:29 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX 20

int grid[MAX + 5][MAX + 5] = {0};
int dir[4][2] = {{0, 1}, {1, 1}, {1, 0}, {1, -1}};

int calc(int x, int y) {
    int temp = 0, ans = 0; 
    for (int i = 0; i < 4; i++) {
        temp = 1;
        for (int j = 0; j < 4; j++){
            int x1 = x + j * dir[i][0];
            int y1 = y + j * dir[i][1];
            if (x1 < 0 || x1 >= MAX) break;
            if (y1 < 0 || y1 >= MAX) break;
            temp *= grid[x1][y1];
        }
       if (temp > ans) ans = temp;
    }
    return ans;
}

int main() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    int temp = 0, ans = 0;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            temp = calc(i, j);
            if (temp > ans) ans = temp;
        }
    }
    printf("%d\n", ans);
    return 0;
}
