/*************************************************************************
	> File Name: 29.HZOJ_124.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Sat 12 Oct 2024 10:42:23 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int degree, college, age, work_age;
    scanf("%d%d%d%d", &degree, &college, &age, &work_age);
    printf("%s", (college <= 50 || degree >= 1) && (age <= 25 || work_age >= 5) ? "ok" : "pass");
    return 0;
}
