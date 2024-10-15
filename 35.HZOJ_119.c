/*************************************************************************
	> File Name: 35.HZOJ_119.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Mon 14 Oct 2024 09:38:19 PM CST
 ************************************************************************/

#include<stdio.h>

//每月最大天数
int day(int y, int m) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) return 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    else return 28 + ((y % 4 == 0 && y % 100) || y % 400 == 0);
}

//昨天的日期
void yesterday(int y, int m, int d) {
    //日期为1
    if (d == 1) {
        m -= 1;
        if (m == 0) {
            y -= 1;
            m = 12;
        }
        d = day(y, m);
    }                
    //日期不为1
    else d -= 1;
    printf("%d %d %d\n", y, m, d);
}


//明天的日期
void tomorrow(int y, int m, int d) {
    //日期为最大值
    if (d == day(y, m)) {
        m += 1;
        if (m == 13) {
            y += 1;
            m = 1;
        }
        d = 1;
    }
    //日期不为最大值
    else d += 1;
    printf("%d %d %d\n", y, m, d);
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    yesterday(y, m, d);
    tomorrow(y, m ,d);
    return 0;
}

/*
#include<stdio.h>

int is_leap_year(int y) {
    return (y % 4 == 0 && y % 100) || (y % 400 == 0);
}

int days(int y, int m) {
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28 + is_leap_year(y);
    }
    return 0;
}

void output_pre_day(int y, int m, int d) {
    d -= 1;
    if (d == 0) m -= 1;
    if (m == 0) y -= 1;
    if (m == 0) m = 12;
    if (d == 0) d = days(y, m);
    printf("%d %d %d\n", y, m, d);
    return ;
}

void output_next_day(int y, int m, int d) {
    d += 1;
    if (d > days(y, m)) m += 1, d = 1;
    if (m == 13) y += 1, m = 1;
    printf("%d %d %d\n", y, m, d);
    return ;
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    output_pre_day(y, m, d);
    output_next_day(y, m, d);
    return 0;
}
*/
