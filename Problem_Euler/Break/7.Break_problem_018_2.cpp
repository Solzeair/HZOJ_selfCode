/*************************************************************************
	> File Name: 7.Enhance_problem_018_2.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 02:28:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 15

int dp[MAX_N + 5][MAX_N + 5];

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> dp[i][j];
        }
    }
    // 动态规划
    for (int i = MAX_N - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}
