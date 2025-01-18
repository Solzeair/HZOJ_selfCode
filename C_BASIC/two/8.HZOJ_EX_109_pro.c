/*************************************************************************
	> File Name: a.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 11 Oct 2024 05:55:45 PM CST
 ************************************************************************/

//调整数据为0 <= n <= 10000
//本代码用于个人多次测试数据，非常规写法

#include <stdio.h>

int main() {
    int n, m;
    int flag = 0;
    while (~scanf("%d", &n)) {//直到文件末尾停止循环
        int j = n;
        do {
            m += 1;
            j /= 10;
        } while (j > 0);
        for (int i = 0; i < m; i++, n /= 10) {
            int tmp = n % 10;
            switch (tmp) {
                case 0:
                case 2: 
                case 4:
                case 6:
                case 8: flag = 1; break;
                default: break;
            }
            if (flag == 1) break;
        }
        if (flag == 1) printf("YES\n");
        else printf("NO\n");
        flag = 0;//重置变量，重复测试代码
        m = 0;
    }
    return 0;
}
