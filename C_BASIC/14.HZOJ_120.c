/*************************************************************************
	> File Name: 18.HZOJ_120.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 09:21:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)  {
        printf("%s", d >= 1 && d <= 31 ? "YES" : "NO");
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("%s", d >= 1 && d <= 30 ? "YES" : "NO");
    } else if (m == 2) {
        if (y % 4 == 0 && y % 100 || y % 400 ==0) {
            printf("%s", d >= 1 && d <= 29 ? "YES" : "NO");   
        } else {
            printf("%s", d >= 1 && d <= 28 ? "YES" : "NO");
        }
    } else printf("NO");
    return 0;
}

/*代码优化————存变量，统一处理
#include<stdio.h>

int main() {
    int y, m, d, days;
    scanf("%d%d%d", &y, &m, &d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 
        || m == 10 || m == 12) days = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) days = 30;
    else days = 28 + ((y % 4 == 0 && y % 100) || (y % 400 == 0));
    if (m <= 0 || m >= 13 || d <= 0 || d > days) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
*/
